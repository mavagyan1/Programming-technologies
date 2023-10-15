#ifndef __HOUSE_HPP__
#define __HOUSE_HPP__

#include <string>
#include <unordered_map>

class House {
public:
    House() = default;
    void listComonents(std::string msg = "") const;
    void setDoor(std::string type);
    void setWalls(std::string type);
    void setRoof(std::string type);
    void setWindows(std::string count);

private:
    std::unordered_map<std::string,std::string> _components;  
};

#endif //__HOUSE_HPP__