#include "Application.h"
#include "ASRequestHandler.h"
#include "ASRequestHandlerFactory.h"

Application::Application():
_hserver(Poco::SharedPtr<ASRequestHandlerFactory>(new ASRequestHandlerFactory()), 8999){
}

Application::~Application(){

}

bool Application::app_start(){
    try{
        _hserver.start();
		return true;
    }
    catch (Poco::Exception& ex){
        printf("Catch a exception. %s\n", ex.message().c_str());
    }
	return false;
}

bool Application::app_stop(){
    try{
        _hserver.stop();
		return true;
    }
    catch (Poco::Exception& ex){
        printf("Catch a exception. %s\n", ex.message().c_str());
    }
	return false;
}