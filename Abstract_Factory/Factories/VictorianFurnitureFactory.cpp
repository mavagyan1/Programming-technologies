#include "VictorianFurnitureFactory.hpp"
#include "../Chair/VictorianChair.hpp"
#include "../Sofa/VictorianSofa.hpp"

auto VictorianFurnitureFactory::createChair() const -> ChairPtr {
    return std::unique_ptr<IChair>{new VictorianChair()};
}
auto VictorianFurnitureFactory::createSofa() const -> SofaPtr {
    return std::unique_ptr<ISofa>{new VictorianSofa()};
}