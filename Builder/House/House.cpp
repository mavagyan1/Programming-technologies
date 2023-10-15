#include "House.hpp"
#include <iostream>

void House::listComonents(std::string msg) const {
    if(msg != "")
        std::cout << msg << std::endl;
    for(auto i : _components)
        std::cout << i.first << ": " << i.second << std::endl;
    std::cout << std::endl;
}

void House::setDoor(std::string type) {
    _components.insert({"Door",type});
}

void House::setRoof(std::string type) {
    _components.insert({"Roof",type});
}

void House::setWalls(std::string type) {
    _components.insert({"Walls",type});
}

void House::setWindows(std::string count) {
    _components.insert({"Windows",count});
}