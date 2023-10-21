#include "VictorianSofa.hpp"
#include <iostream>

VictorianSofa::VictorianSofa() {
    std::cout << "Ctor of Victorian Sofa" << std::endl;
}

void VictorianSofa::layOn() const {
    std::cout << "Sit on Victorian Sofa" << std::endl;
}