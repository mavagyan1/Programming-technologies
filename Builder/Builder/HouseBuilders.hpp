#ifndef _HOUSE_BUILDERS_HPP
#define _HOUSE_BUILDERS_HPP

#include "Builder.hpp"

class HouseBuilder_1 : public HouseBuilder{
public:
    void createWalls() override;
    void createRoof() override;
    void createDoor() override;    
    void createWindows() override;
 };

class HouseBuilder_2 : public HouseBuilder { 
public:
    void createWalls() override;
    void createRoof() override;
    void createDoor() override;    
    void createWindows() override;
};

#endif //_HOUSE_BUILDERS_HPP