#ifndef __TRIANGLE_HPP__
#define __TRIANGLE_HPP__

#include "Shape.hpp"

class Trinagle : public Shape {
public:
    std::shared_ptr<Shape> clone() const override;
    void printInfo() const override;
};
#endif //__TRIANGLE_HPP__