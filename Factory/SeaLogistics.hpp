#ifndef __SEA_LOGISTICS_HPP__
#define __SEA_LOGISTICS_HPP__
#include "Logistics.hpp"

class SeaLogistics : public Logistics {
public:
    TransportPtr createTransport() override;
};

#endif //__SEA_LOGISTICS_HPP__