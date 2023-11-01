#ifndef __CONCRETE_DECORATOR_1_HPP__

#include "baseDecorator.hpp"

class ConcreteDecorator1 : public BaseDecorator {
public:
    ConcreteDecorator1(std::shared_ptr<IComponent>);
    void execute() override;
    void extraWork();
};

#define __CONCRETE_DECORATOR_1_HPP__
#endif //__CONCRETE_DECORATOR_1_HPP__
