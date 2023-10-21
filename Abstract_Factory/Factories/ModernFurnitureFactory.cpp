#include "ModernFurnitureFactory.hpp"
#include "../Chair/ModernChair.hpp"
#include "../Sofa/ModernSofa.hpp"

auto ModernFurnitureFactory::createChair() const -> ChairPtr {
    return std::unique_ptr<IChair>{new ModernChair()};
}

auto ModernFurnitureFactory::createSofa() const -> SofaPtr {
    return std::unique_ptr<ISofa>{new ModernSofa()};
}