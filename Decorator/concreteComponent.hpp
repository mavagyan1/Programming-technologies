#ifndef __CONCRETE_COMPONENT_HPP__
#define __CONCRETE_COMPONENT_HPP__
#include "component.hpp"

class ConcreteComponent : public IComponent {
public:
    void execute() override;
};

#endif //__CONCRETE_COMPONENT_HPP__
