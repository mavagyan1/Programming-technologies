#ifndef __BASE_DECORATOR_HPP__
#define __BASE_DECORATOR_HPP__

#include "component.hpp"
#include <memory> //std::shared_ptr

class BaseDecorator : public IComponent {
public:
    BaseDecorator(std::shared_ptr<IComponent> component);
    void execute() override;

private:
    std::shared_ptr<IComponent> _wrappee;

};

#endif //__BASE_DECORATOR_HPP__


