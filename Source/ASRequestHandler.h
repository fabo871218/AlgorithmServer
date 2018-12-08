#ifndef _AS_REQUEST_HANDLER_H_
#define _AS_REQUEST_HANDLER_H_

#include <Poco/Net/HTTPRequest.h>

class ASRequestDetect : public Poco::Net::HTTPRequest{
public:
    ASRequestDetect() = default;
    ~ASRequestDetect() = default;

private:

};

class ASRequestException : public Poco::Net::HTTPRequest{
public:
    ASRequestException() = default;
    ~ASRequestException() = default;
};

#endif /*_AS_REQUEST_HANDLER_H_*/
