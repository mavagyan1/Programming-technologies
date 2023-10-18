#include "Adaptor.hpp"
#include <algorithm>
#include <iostream>
#include <iterator>
#include <string_view>

template <typename T>
void printList(std::list<T>&, std::string_view);

int main() {
    
    std::list<int> myList{1,2,3,4};

    ListToStack adaptor(myList);
    
    adaptor.push(5);
    printList<int>(myList,"List after pushing element");

    adaptor.pop();
    printList<int>(myList,"List after poping element");
    
    adaptor.top() = 10;
    printList<int>(myList,"List after changin top element");

    return 0;
}

template <typename T>
void printList(std::list<T>& list,std::string_view msg) {
    if(msg != "")
        std::cout << msg << std::endl;
    std::copy(std::begin(list), std::end(list), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;
}