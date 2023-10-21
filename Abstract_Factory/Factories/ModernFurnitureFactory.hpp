#ifndef __MODERN_FURNITURE_FACTORY_HPP__
#define __MODERN_FURNITURE_FACTORY_HPP__

#include "AbstractFurnitureFatory.hpp"

class ModernFurnitureFactory : public AbstractFurnitureFactory {
public:
    ChairPtr createChair() const override;
    SofaPtr createSofa() const override;
};

#endif//__MODERN_FURNITURE_FACTORY_HPP__