#include "VictorianChair.hpp"
#include <iostream>

VictorianChair::VictorianChair() {
    std::cout << "Ctor of Victorian Chair" << std::endl;
}

void VictorianChair::sitOn() const {
    std::cout << "Sit on Victorian Chair" << std::endl;
}