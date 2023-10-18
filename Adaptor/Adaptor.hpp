#ifndef __ADAPTOR_HPP__
#define __ADAPTOR_HPP__

#include <list>

class ListToStack {
public:
    ListToStack(std::list<int>& list);
    void push(int value);
    void pop();
    int& top();
    const int& top() const;
private:
    std::list<int>& _list;
};

#endif //__ADAPTOR_HPP__
