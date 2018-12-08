#ifndef _APPLICATION_H_
#define _APPLICATION_H_

#include "ComDefine.h"
#include <Poco/Net/HTTPServer.h>

class Application{
public:
    Application();
    ~Application();

    bool app_start();
    bool app_stop();

private:
    Poco::Net::HTTPServer   _hserver;
};

#endif /*_APPLICATION_H_*/
