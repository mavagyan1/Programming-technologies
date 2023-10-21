#include "ModernChair.hpp"
#include <iostream>

ModernChair::ModernChair() {
    std::cout << "Ctor of Modern Chair" << std::endl;
}

void ModernChair::sitOn() const {
    std::cout << "Sit on Modern Chair" << std::endl;
}