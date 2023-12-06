#ifndef  __CONCRETE_HANDLERS_HPP__
#define __CONCRETE_HANDLERS_HPP__

#include "BaseHandler.hpp"

class ConcreteHandler_1 : public  BaseHandler {
public:
    void handle(std::string) override;
};

class ConcreteHandler_2 : public BaseHandler {
   void handle(std::string) override;
};



#endif  //__CONCRETE_HANDLERS_HPP__