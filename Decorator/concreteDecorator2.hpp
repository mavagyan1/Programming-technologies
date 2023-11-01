#ifndef __CONCRETE_DECORATOR_2_HPP__

#include "baseDecorator.hpp"

class ConcreteDecorator2 : public BaseDecorator {
public:
    ConcreteDecorator2(std::shared_ptr<IComponent>);
    void execute() override;
    void extraWork();
};

#define __CONCRETE_DECORATOR_2_HPP__
#endif //__CONCRETE_DECORATOR_2_HPP__
