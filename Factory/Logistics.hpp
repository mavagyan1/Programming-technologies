#ifndef __LOGISTICS_HPP__
#define __LOGISTICS_HPP__

#include "Transport.hpp"
#include <memory>

using TransportPtr = std::shared_ptr<Transport>;

class Logistics {
public:
    virtual ~Logistics();
    virtual TransportPtr createTransport() = 0;
    void planDeivery();
};

#endif //__LOGISTICS_HPP__