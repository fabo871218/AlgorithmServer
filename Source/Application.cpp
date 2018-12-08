#include "Application.h"
#include "ASRequestHandler.h"

Application::Application():
_hserver(Poco::SharedPtr<ASRequestHandlerFactory>(new ASRequestHandlerFactory()), 8999){
}

Application::~Application(){

}

bool Application::app_start(){
    try{
        _hserver.start();
    }
    catch (Poco::Exception& ex){
        printf("Catch a exception. %s\n", ex.message().c_str());
    }
}

bool Application::app_stop(){
    try{
        _hserver.stop();
    }
    catch (Poco::Exception& ex){
        printf("Catch a exception. %s\n", ex.message().c_str());
    }
}