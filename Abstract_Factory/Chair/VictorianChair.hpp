#ifndef __VICTORIAN_CAIR_HPP__
#define __VICTORIAN_CAIR_HPP__

#include "IChair.hpp"

class VictorianChair : public IChair {
public:
    VictorianChair();
    void sitOn() const override;
};
#endif//__VICTORIAN_CAIR_HPP__