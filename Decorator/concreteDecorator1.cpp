#include "concreteDecorator1.hpp"
#include <iostream>

ConcreteDecorator1::ConcreteDecorator1(std::shared_ptr<IComponent> comp) :BaseDecorator{comp} {}

void ConcreteDecorator1::extraWork() {
    std::cout << "Doing extra work in ConcreteDecorator 1" << std::endl;
}

void ConcreteDecorator1::execute() {
    std::cout << std::endl;
    BaseDecorator::execute();
    extraWork();
    std::cout << std::endl;
}