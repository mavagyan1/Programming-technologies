#include "kitchen.hpp"
#include <iostream>

void Kitchen::readOrder() {
    std::cout << "The order is being read..." << std::endl;
}

void Kitchen::makeOrder() {
    std::cout << "The order is being made..." << std::endl;
    std::cout << "It's ready!" << std::endl;
}

void Kitchen::callWaiter() {
    std::cout << "The waiter is called" << std::endl;
}