#include "Adaptor.hpp"

ListToStack::ListToStack(std::list<int>& list) : _list{list} {}

void ListToStack::push(int value) {
    _list.push_back(value);
}

void ListToStack::pop() {
    _list.pop_back();
}

int& ListToStack::top() {
    return _list.back();
}

const int& ListToStack::top() const {
    return _list.back();
}