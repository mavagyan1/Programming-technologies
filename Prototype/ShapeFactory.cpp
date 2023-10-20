#include "ShapeFactory.hpp"
#include "Rectangle.hpp"
#include "Triangle.hpp"

ShapeFactory::ShapeFactory() {
    _shapes["rectangle"] = std::make_shared<Rectangle>();
    _shapes["triangle"] =  std::make_shared<Trinagle>();
}

 std::shared_ptr<Shape> ShapeFactory::createShape(std::string name) const {
    return _shapes.at(name)->clone();
 }