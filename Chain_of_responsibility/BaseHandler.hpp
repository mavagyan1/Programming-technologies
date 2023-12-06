#ifndef __BASE_HANDLER_HPP__
#define __BASE_HANDLER_HPP__

#include "IHandler.hpp"

class BaseHandler : public IHandler {
public:
    void handle(std::string request) override;
    void setNext(IHandler* next) override;
    ~BaseHandler();
private:
    IHandler* _next;
};

#endif // __BASE_HANDLER_HPP__