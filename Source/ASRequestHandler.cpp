#include "ASRequestHandler.h"
#include <Poco/Net/HTTPServerResponse.h>

void ASRequestDetect::handleRequest(Poco::Net::HTTPServerRequest& request, Poco::Net::HTTPServerResponse& response){
	response.setChunkedTransferEncoding(true);
	response.setContentType("text/html");
	std::ostream& ostr = response.send();
	ostr << "<html><head><title>HTTP Server powered by POCO C++ Libraries</title></head>";
	ostr << "<body>";
	ostr << "<h1>hello</h1>";
	ostr << "</body></html>";
}

void ASRequestException::handleRequest(Poco::Net::HTTPServerRequest& request, Poco::Net::HTTPServerResponse& response){
	response.setChunkedTransferEncoding(true);
	response.setContentType("text/html");
	std::ostream& ostr = response.send();
	ostr << "<html><head><title>HTTP Server powered by POCO C++ Libraries</title></head>";
	ostr << "<body>";
	ostr << "<h1>hello</h1>";
	ostr << "</body></html>";
}