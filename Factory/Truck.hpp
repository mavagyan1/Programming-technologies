#ifndef  __TRUCK_HPP__
#define  __TRUCK_HPP__

#include "Transport.hpp"

class Truck : public Transport {
public:
    void deliver() override;
};
#endif //__TRUCK_HPP__