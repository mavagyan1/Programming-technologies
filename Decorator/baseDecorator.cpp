#include "baseDecorator.hpp"

BaseDecorator::BaseDecorator(std::shared_ptr<IComponent> component) : _wrappee{component} { }

void BaseDecorator::execute() {
    _wrappee->execute();
}