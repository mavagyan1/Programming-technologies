#include "sigleton.hpp"

int Singleton::count = 0;

Singleton::Singleton() {
    ++count;
}

Singleton& Singleton::getInstance() {
    static Singleton inst;
    return inst;
}
int Singleton::getCount() const {
    return count;
}