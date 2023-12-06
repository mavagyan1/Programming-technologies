#include "BaseHandler.hpp"
#include "ConcreteHandlers.hpp"
#include <memory>

int main() {
    IHandler* h1 = new ConcreteHandler_1();
    IHandler* h2 = new ConcreteHandler_2();

    h1->setNext(h2);
    h1->handle("Handler 1");
    h1->handle("Handler 2");
    h1->handle("Handler 3"); // does not exist


}