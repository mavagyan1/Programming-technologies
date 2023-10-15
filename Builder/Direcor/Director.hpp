#ifndef __DIRECTOR_HPP
#define __DIRECTOR_HPP__
#include "../Builder/Builder.hpp"
#include <memory>

class Director {
public:
    Director() = default;
    Director(HouseBuilder*);
    void setBuilder(HouseBuilder*);
    void build();
    
private:
    HouseBuilder* _house_builder;
};


#endif //__DIRECTOR_HPP__