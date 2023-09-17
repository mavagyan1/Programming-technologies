#ifndef  __SHIP_HPP__
#define  __SHIP_HPP__

#include "Transport.hpp"

class Ship : public Transport {
public:
    void deliver() override;
};
#endif //__SHIP_HPP__