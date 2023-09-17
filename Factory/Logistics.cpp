#include "Logistics.hpp"

Logistics::~Logistics() {}

void Logistics::planDeivery() {
    TransportPtr transport = createTransport();
    transport->deliver();
}
