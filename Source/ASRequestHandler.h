#ifndef _AS_REQUEST_HANDLER_H_
#define _AS_REQUEST_HANDLER_H_

#include <Poco/Net/HTTPRequestHandler.h>

class ASRequestDetect : public Poco::Net::HTTPRequestHandler{
public:
    ASRequestDetect() = default;
    virtual ~ASRequestDetect() = default;

	virtual void handleRequest(Poco::Net::HTTPServerRequest& request, Poco::Net::HTTPServerResponse& response);

private:

};

class ASRequestException : public Poco::Net::HTTPRequestHandler{
public:
    ASRequestException() = default;
    virtual ~ASRequestException() = default;

	virtual void handleRequest(Poco::Net::HTTPServerRequest& request, Poco::Net::HTTPServerResponse& response);
};

#endif /*_AS_REQUEST_HANDLER_H_*/
