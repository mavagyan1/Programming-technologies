#include <iostream>
#include "Component.hpp"
#include "Composite.hpp"
#include "Leaf.hpp"

using ComponentPtr = std::shared_ptr<Component>;
using CompositePtr = std::shared_ptr<Composite>;

int main() {
    ComponentPtr item1 = std::make_shared<Leaf>(10.0);
    ComponentPtr item2 = std::make_shared<Leaf>(5.0);
    ComponentPtr item3 = std::make_shared<Leaf>(3.0);

    CompositePtr box1 = std::make_shared<Composite>();
    box1->add(item1);
    box1->add(item2);

    CompositePtr box2 = std::make_shared<Composite>();
    box2->add(box1);
    box2->add(item3);

    double totalPrice = box2->getPrice();

    std::cout << "Total Price: $" << totalPrice << std::endl;

    return 0;
}