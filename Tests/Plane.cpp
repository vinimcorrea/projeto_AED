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

// get number of passengers according to flight number, if not existing flight or more passengers than capacity of plane, return -1
int Plane::numPassengers(unsigned int flight) const {
    for(auto it = flightPlan.begin(); it != flightPlan.end(); it++){
        if((*it).getFlightNumber() == flight){
            if((*it).getPassengers().size() <= capacity){
                (*it).getPassengers().size();
            }
        }
    }
    return -1;
}

void Plane::doneService(){
    realizedServices.push_back(services.front());
    services.pop();
}

/*
void Plane::sortServices() {
    vector<Service> aux;
    for(unsigned i = 0; i < services.size(); i++){
        aux.push_back(services.front());
        services.pop();
    }
    sort(aux.begin(), aux.end());

    for(unsigned i = 0; i < aux.size(); i++){
        services.push(aux[i]);
    }
}
bool Plane::cancelFlight(Flight &f1) {
    return f1.getPassengers().size() > capacity;
}
*/

