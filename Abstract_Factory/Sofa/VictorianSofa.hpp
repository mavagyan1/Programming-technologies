#ifndef __VICTORIAN_SOFA_HPP__
#define __VICTORIAN_SOFA_HPP__

#include "ISofa.hpp"

class VictorianSofa : public ISofa {
public:
    VictorianSofa();
    void layOn() const override;
};
#endif//__VICTORIAN_SOFA_HPP__