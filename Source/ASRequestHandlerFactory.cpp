#include "ASRequestHandler.h"
#include "ASRequestHandlerFactory.h"
#include <Poco/Net/HTTPServerRequest.h>


Poco::Net::HTTPRequestHandler* ASRequestHandlerFactory::createRequestHandler(const Poco::Net::HTTPServerRequest& request){
    std::string strUri = request.getURI();
    if (strUri == "Detect"){

    }
    else if (strUri == "Normal"){

    }
    else{

    }
}