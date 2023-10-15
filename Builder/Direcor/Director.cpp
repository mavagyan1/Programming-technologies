#include "Director.hpp"

Director::Director(HouseBuilder* house_builder) : _house_builder(house_builder) {}

void Director::setBuilder(HouseBuilder* house_builder) {
    _house_builder = house_builder;
}

void Director::build() {
    _house_builder->createDoor();
    _house_builder->createRoof();
    _house_builder->createWalls();
    _house_builder->createWindows();
}
