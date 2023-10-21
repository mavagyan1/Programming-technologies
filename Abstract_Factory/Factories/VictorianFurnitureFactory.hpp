#ifndef __VICTORIAN_FURNITURE_FACTORY_HPP__
#define __VICTORIAN_FURNITURE_FACTORY_HPP__

#include "AbstractFurnitureFatory.hpp"

class VictorianFurnitureFactory : public AbstractFurnitureFactory {
public:
    ChairPtr createChair() const override;
    SofaPtr createSofa() const override;
};

#endif //__VICTORIAN_FURNITURE_FACTORY_HPP__