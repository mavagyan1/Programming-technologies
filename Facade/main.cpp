#include "facade.hpp"
#include <memory>

int main() {
    std::unique_ptr<OrderFacade> facade{new OrderFacade()};
    facade->doOrder();
}