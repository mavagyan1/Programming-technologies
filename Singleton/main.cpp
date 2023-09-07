#include "sigleton.hpp"

int main() {

    Singleton& inst1 = Singleton::getInstance();
    std::cout << inst1.getCount() << std::endl;
    Singleton& inst2 = Singleton::getInstance();
    std::cout << inst2.getCount() << std::endl;
    return 0;
}