#ifndef __LEAF_HPP__
#define __LEAF_HPP__
#include "Component.hpp"

class Leaf : public Component {
public:
    Leaf(double);
    double getPrice() const override;
private:
    double _price;
}; 

#endif //__LEAF_HPP__
