#include "ShapeFactory.hpp"

int main() {
    
    ShapeFactory factory;

    auto rectangle = factory.createShape("rectangle");
    auto triangle = factory.createShape("triangle");

    rectangle->printInfo();
    triangle->printInfo();

    return 0;
}