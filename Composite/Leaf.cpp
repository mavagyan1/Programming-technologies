#include "Leaf.hpp"

Leaf::Leaf(double price) : _price(price) {}

double Leaf::getPrice() const {
    return _price;
}