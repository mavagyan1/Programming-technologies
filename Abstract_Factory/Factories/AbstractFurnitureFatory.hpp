#ifndef __ABSTARCT_FURNITURE_FACTORY_HPP__
#define __ABSTARCT_FURNITURE_FACTORY_HPP__
#include "../Chair/IChair.hpp"
#include "../Sofa/ISofa.hpp"
#include <memory>

class AbstractFurnitureFactory{
protected:
    using ChairPtr = std::unique_ptr<IChair>;
    using SofaPtr = std::unique_ptr<ISofa>;

public:
    virtual ChairPtr createChair() const = 0;
    virtual SofaPtr createSofa() const = 0;
};

#endif //__ABSTARCT_FACTORY_HPP__