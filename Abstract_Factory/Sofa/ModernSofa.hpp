#ifndef __MODERN_SOFA_HPP__
#define __MODERN_SOFA_HPP__

#include "ISofa.hpp"

class ModernSofa : public ISofa {
public:
    ModernSofa();
    void layOn() const override;
};
#endif //__MODERN_SOFA_HPP__