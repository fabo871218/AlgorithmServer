#ifndef _AS_REQUEST_HANDLER_FACTORY_H_
#define _AS_REQUEST_HANDLER_FACTORY_H_

#include "ComDefine.h"
#include <functional>
#include <Poco/Net/HTTPRequestHandlerFactory.h>

class ASRequestHandlerFactory : public Poco::Net::HTTPRequestHandlerFactory{
public:
    typedef Poco::SharedPtr<ASRequestHandlerFactory> Ptr;
	ASRequestHandlerFactory();
	virtual ~ASRequestHandlerFactory();

    virtual Poco::Net::HTTPRequestHandler* createRequestHandler(const Poco::Net::HTTPServerRequest& request);

private:
	Poco::Net::HTTPRequestHandler*  pre_handle_detect(const Poco::Net::HTTPServerRequest& request);
	Poco::Net::HTTPRequestHandler*  pre_handle_exception(const Poco::Net::HTTPServerRequest& request);

private:
	typedef std::function<Poco::Net::HTTPRequestHandler*(const Poco::Net::HTTPServerRequest& request)> PreHandler;
	std::map<std::string, PreHandler>	_preHandlers;
};

#endif /*_AS_REQUEST_HANDLER_FACTORY_H_*/
