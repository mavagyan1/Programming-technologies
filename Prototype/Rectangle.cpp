#include "Rectangle.hpp"
#include <iostream>

std::shared_ptr<Shape> Rectangle::clone() const {
    return std::make_shared<Rectangle>(*this);
}

void Rectangle::printInfo() const {
    std::cout << "Rectangle" << std::endl;
}