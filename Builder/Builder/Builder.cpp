#include "Builder.hpp"

HouseBuilder::HouseBuilder() {
    _house = HousePtr(new House);
}
auto HouseBuilder::getHouse() -> HousePtr {
    return std::move(_house);
}