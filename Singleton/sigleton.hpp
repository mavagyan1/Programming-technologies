/*
/ This sigleton class is thead-safe since C++11 (Meyers' Singleton)
*/
#include <iostream>

class Singleton {
    public:
    Singleton(const Singleton&) = delete;
    Singleton(Singleton&&) = delete;
    Singleton& operator=(const Singleton&) = delete;
    Singleton& operator=(Singleton&&) = delete;
    int getCount() const;
    static Singleton& getInstance();

    private:
    Singleton();
    ~Singleton() = default;
    static int count;

};


