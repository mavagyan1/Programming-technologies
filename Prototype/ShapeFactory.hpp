#ifndef __SHAPE_FACTORY_HPP__
#define __SHAPE_FACTORY_HPP__
#include <memory>
#include <unordered_map>

#include "Shape.hpp"


class ShapeFactory {
public:
    ShapeFactory();
    std::shared_ptr<Shape> createShape(std::string) const;
private:
    std::unordered_map<std::string, std::shared_ptr<Shape>> _shapes;
};

#endif //__SHAPE_FACTORY_HPP__