#include "ConcreteHandlers.hpp"
#include <iostream>

void ConcreteHandler_1::handle(std::string request) {
    if(request != "Handler 1") {
        BaseHandler::handle(request);
    } else
    std::cout << "Handle 1 can handle this request" <<std::endl;
}

void ConcreteHandler_2::handle(std::string request) {
    if(request != "Handler 2") {
        BaseHandler::handle(request);
    } else
    std::cout << "Handle 2 can handle this request" <<std::endl;
}