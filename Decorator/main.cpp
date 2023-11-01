#include "concreteComponent.hpp"
#include "concreteDecorator1.hpp"
#include "concreteDecorator2.hpp"



int main() {

    std::shared_ptr<IComponent> component{new ConcreteComponent()};
    component->execute();

    std::shared_ptr<IComponent> decorator_1{new ConcreteDecorator1(component)};
    decorator_1->execute();

    std::shared_ptr<IComponent> decorator_2{new ConcreteDecorator2(decorator_1)};
    decorator_2->execute();

    return 0;
}