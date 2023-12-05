#ifndef __FACADE_HPP__
#define __FACADE_HPP__
#include <memory>
#include "waiter.hpp"
#include "kitchen.hpp"

class OrderFacade {
public:
    OrderFacade();
    void doOrder();
private:
    std::unique_ptr<Waiter> _waiter;
    std::unique_ptr<Kitchen>  _kitchen;
};

#endif  //__FACADE_HPP__