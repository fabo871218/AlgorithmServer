#ifndef _AS_REQUEST_HANDLER_FACTORY_H_
#define _AS_REQUEST_HANDLER_FACTORY_H_

#include <Poco/Net/HTTPRequestHandlerFactory.h>

class ASRequestHandlerFactory : public Poco::Net::HTTPRequestHandlerFactory{
public:
    typedef Poco::SharedPtr<ASRequestHandlerFactory> Ptr;
    ASRequestHandlerFactory() = default;
    virtual ~ASRequestHandlerFactory() = default;

    virtual Poco::Net::HTTPRequestHandler* createRequestHandler(const Poco::Net::HTTPServerRequest& request);
};

#endif /*_AS_REQUEST_HANDLER_FACTORY_H_*/
