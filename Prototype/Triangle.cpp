#include "Triangle.hpp"
#include <iostream>

std::shared_ptr<Shape> Trinagle::clone() const {
    return std::make_shared<Trinagle>(*this);
}

void Trinagle::printInfo() const {
    std::cout << "Trinagl" << std::endl;
}