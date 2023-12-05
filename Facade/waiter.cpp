#include "waiter.hpp"
#include <iostream>

void Waiter::writeOrder(){
    std::cout << "Order is being written..." <<std::endl;
}

void Waiter::sendOrderToKitechen() {
    std::cout<< "Order is sent to the kitchen" << std::endl;
}

void Waiter::serveCustomer() {
    std::cout <<"The client is served" << std::endl;
}