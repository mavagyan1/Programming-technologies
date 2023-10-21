#ifndef __MODERN_CAIR_HPP__
#define __MODERN_CAIR_HPP__

#include "IChair.hpp"

class ModernChair : public IChair {
public:
    ModernChair();
    void sitOn() const override;
};
#endif//__MODERN_CAIR_HPP__