#include "Composite.hpp"

void Composite::add(std::shared_ptr<Component> component) {
    _children.push_back(component);
}

double Composite::getPrice() const {
    double total{0.0};
    for(const auto& child : _children) 
        total += child->getPrice();
    return total;
}