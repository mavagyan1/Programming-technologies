#include "BaseHandler.hpp"
#include <iostream>

void BaseHandler::setNext(IHandler* next) {
    _next = next;
}

void BaseHandler::handle(std::string request) {
    if(_next)
        _next->handle(request);
    else
        std::cout << "This request is not handeled" << std::endl;
}
BaseHandler::~BaseHandler() {
    delete _next;
}