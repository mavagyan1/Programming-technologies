#include "RoadLogistics.hpp"
#include "SeaLogistics.hpp"
#include "Ship.hpp"
#include "Truck.hpp"

int main() {

    RoadLogistics road_log;
    SeaLogistics sea_log;

    road_log.planDeivery();
    sea_log.planDeivery();

    return 0;
}