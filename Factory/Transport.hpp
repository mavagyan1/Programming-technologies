#ifndef __TRANSPORT_HPP__
#define __TRANSPORT_HPP__


class Transport {
public:
    virtual ~Transport() {};
    void virtual deliver() = 0;

};
#endif  //__TRANSPORT_HPP__


