#ifndef _HTTP_SERVER_H_
#define _HTTP_SERVER_H_

#include "ComDefine.h"
#include <Poco/NET/HTTPServer.h>

class HttpServer{
public:


private:
    Poco::Net::HTTPServer _hserver;
};

#endif /*_HTTP_SERVER_H_*/
