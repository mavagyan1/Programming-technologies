#include "facade.hpp"
#include "waiter.hpp"
#include "kitchen.hpp"

OrderFacade::OrderFacade() : _waiter{new Waiter()}, _kitchen{new Kitchen()} { }

void OrderFacade::doOrder() {
    _waiter->writeOrder();
    _waiter->sendOrderToKitechen();
    _kitchen->readOrder();
    _kitchen->makeOrder();
    _kitchen->callWaiter();
    _waiter->serveCustomer();
}