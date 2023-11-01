#include "concreteDecorator2.hpp"
#include <iostream>

ConcreteDecorator2::ConcreteDecorator2(std::shared_ptr<IComponent> comp) :BaseDecorator{comp} {}

void ConcreteDecorator2::extraWork() {
    std::cout << "Doing extra work in ConcreteDecorator 2" << std::endl;
}

void ConcreteDecorator2::execute() {
    std::cout << std::endl;
    BaseDecorator::execute();
    extraWork();
    std::cout << std::endl;
}