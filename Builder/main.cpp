#include "Builder/HouseBuilders.hpp"
#include "Direcor/Director.hpp"
#include <memory> //std::shared_ptr

int main() {

    auto house_builder1 = std::unique_ptr<HouseBuilder>(new HouseBuilder_1());
    auto house_builder2 = std::unique_ptr<HouseBuilder>(new HouseBuilder_2());

    auto dir = std::unique_ptr<Director>(new Director());
    dir->setBuilder(house_builder1.get());
    dir->build();  
    auto house_1 = house_builder1->getHouse();
    house_1 ->listComonents("House 1");

    dir->setBuilder(house_builder2.get());
    dir->build();
    auto house_2 = house_builder2->getHouse();
    house_2 ->listComonents("House 2");
  
    return 0;
}