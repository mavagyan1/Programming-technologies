#ifndef __SHAPE_HPP__
#define __SHAPE_HPP__

#include <memory>
#include <string>

class Shape {
public:
    virtual std::shared_ptr<Shape> clone() const = 0;
    virtual void printInfo() const = 0;
    virtual ~Shape() = default;
};

#endif //__SHAPE_HPP__