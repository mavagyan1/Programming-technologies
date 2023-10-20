#ifndef __RECTANGLE_HPP__
#define __RECTANGLE_HPP__

#include "Shape.hpp"

class Rectangle : public Shape {
public:
    std::shared_ptr<Shape> clone() const override;
    void printInfo() const override;
};
#endif //__RECTANGLE_HPP__