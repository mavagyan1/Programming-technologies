#include "HouseBuilders.hpp"


//House Builder 1
void HouseBuilder_1::createDoor() {
    _house->setDoor("Wooden");
}
void HouseBuilder_1::createRoof() {
    _house->setRoof("Clay Roof");
}

void HouseBuilder_1::createWalls() {
    _house->setWalls("Stone");
}
void HouseBuilder_1::createWindows() {
    _house->setWindows("6");
}

//House Builder 1
void HouseBuilder_2::createDoor() {
    _house->setDoor("Metalic");
}
void HouseBuilder_2::createRoof() {
    _house->setRoof("Metal Roof");
}

void HouseBuilder_2::createWalls() {
    _house->setWalls("Wooden");
}
void HouseBuilder_2::createWindows() {
    _house->setWindows("8");
}