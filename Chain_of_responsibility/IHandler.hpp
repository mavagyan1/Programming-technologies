#ifndef __IHANDLER_HPP__
#define __IHANDLER_HPP__
#include  <string>

#include <memory> //std::shared_ptr

class IHandler {
public:
    virtual void handle(std::string request) = 0; 
    virtual void setNext(IHandler*) = 0;
    virtual ~IHandler() = default;
};

#endif //__IHANDLER_HPP__