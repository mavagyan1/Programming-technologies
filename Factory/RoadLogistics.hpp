#ifndef __ROAD_LOGISTICS_HPP__
#define __ROAD_LOGISTICS_HPP__

#include "Logistics.hpp"

class RoadLogistics : public Logistics {
public:
    TransportPtr createTransport() override;
};

#endif //__ROAD_LOGISTICS_HPP__