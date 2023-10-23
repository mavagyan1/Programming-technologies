#ifndef __COMPOSITE_HPP__
#define __COMPOSITE_HPP__

#include <memory>
#include <vector>
#include "Component.hpp"

class Composite : public Component {
public:
    void add(std::shared_ptr<Component> componet);
    double getPrice() const override;
private:
    std::vector<std::shared_ptr<Component>> _children;
};
#endif //__COMPOSITE_HPP__