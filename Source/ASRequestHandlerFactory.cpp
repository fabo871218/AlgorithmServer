#include "ASRequestHandler.h"
#include "ASRequestHandlerFactory.h"
#include <Poco/Net/HTTPServerRequest.h>

#define REGISTER_HANDLER(N,H) _preHandlers[N] = std::bind(&ASRequestHandlerFactory::H, this, std::placeholders::_1);

ASRequestHandlerFactory::ASRequestHandlerFactory(){
	REGISTER_HANDLER("/detect", pre_handle_detect);
	REGISTER_HANDLER("", pre_handle_detect);
}

ASRequestHandlerFactory::~ASRequestHandlerFactory(){

}


Poco::Net::HTTPRequestHandler* ASRequestHandlerFactory::pre_handle_detect(const Poco::Net::HTTPServerRequest& request){
	return new ASRequestDetect();
}

Poco::Net::HTTPRequestHandler*  ASRequestHandlerFactory::pre_handle_exception(const Poco::Net::HTTPServerRequest& request){
	return new ASRequestException();
}


Poco::Net::HTTPRequestHandler* ASRequestHandlerFactory::createRequestHandler(const Poco::Net::HTTPServerRequest& request){
	auto pre_handler = _preHandlers.find(request.getURI());
	if (pre_handler != _preHandlers.end()){
		if (pre_handler->second){
			return pre_handler->second(request);
		}
	}
	return new ASRequestException();
}