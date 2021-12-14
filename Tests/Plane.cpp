#include "Plane.h"
#include <string>
#include <vector>

using namespace std;

void Plane::addFlight(const Flight &f1) {
    flightPlan.push_back(f1);
}

const queue<Service> &Plane::getServices() const {
    return services;
}

const list<Flight> &Plane::getFlight() const{
    return flightPlan;
}

void Plane::addService(const Service &s1){
    services.push(s1);
}

unsigned int Plane::getCapacity() const {
    return capacity;
}

// get number of passengers according to flight number, if not existing flight, return -1
int Plane::numPassengers(unsigned int flight) const {
    for(auto it = flightPlan.begin(); it != flightPlan.end(); it++){
        if((*it).getFlightNumber() == flight)
            return (*it).getPassengers().size();

    }
    return -1;

}
