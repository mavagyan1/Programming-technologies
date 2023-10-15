#ifndef __I_HOUSE_BUILDER_HPP__
#define __I_HOUSE_BUILDER_HPP__
#include "../House/House.hpp"
#include <memory>
#include <string>

class HouseBuilder {
private:
    using HousePtr = std::unique_ptr<House>;
public:
    HouseBuilder();
    HousePtr getHouse();
    virtual ~HouseBuilder() = default;
    virtual void createWalls() = 0;
    virtual void createRoof() = 0;
    virtual void createDoor() = 0;    
    virtual void createWindows() = 0;
protected:
    HousePtr _house;
};

#endif //__I_HOUSE_BUILDER_HPP__

