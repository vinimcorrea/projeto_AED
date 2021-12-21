#include "Plane.h"

using namespace std;

void Plane::addFlight(const Flight &f1) {
    flightPlan.push_back(f1);
}

const string& Plane::getLicense() const {
    return license;
}

const string& Plane::getType() const {
    return type;
}

const unsigned& Plane::getCapacity() const {
    return capacity;
}

const queue<Service> &Plane::getServices() const {
    return services;
}

const list<Flight> &Plane::getFlight() const{
    return flightPlan;
}

const int Plane::getNumberOfFlights() const {
    return flightPlan.size();
}

void Plane::addService(const Service &s1){
    services.push(s1);
}


// get number of passengers according to flight number, if not existing flight, throw exception
int Plane::numPassengers(unsigned int flight) const {
    for(const auto & it : flightPlan){
        if(it.getFlightNumber() == flight){
            return it.getPassengers().size();
        }
    }
    //throw FlightDoesNotExist(flight);
    return -1;
}

void Plane::doneService(){
    realizedServices.push_back(services.front());
    services.pop();
}

// Passenger gets or not ticket for specific flight, if flight doesn't exist, return false, otherwise return true if there are seats available.
// If passenger wants luggage, add to numberOfLuggage.

bool Plane::passengerGetTicket(Passenger & p1, unsigned flNumber){
    for(auto & it : flightPlan){
        if(it.getFlightNumber() == flNumber){
            unsigned freeSeats = capacity - numPassengers(it.getFlightNumber());
            if(p1.getLuggage()){
                it.setNumberOfLuggage(it.getNumberOfLuggage() + p1.getPassengers());
            }
            if(p1.getPassengers() <= freeSeats) {
                it.addPassenger(p1);
                return true;
            }
            return false;
        }
    }
    //throw FlightDoesNotExist(flNumber);
    return false;
}

// due to bad conditions of plane or pandemics.
void Plane::cancelFlight(unsigned fl) {
    for(auto it = flightPlan.begin(); it != flightPlan.end(); it++){
        if((*it).getFlightNumber() == fl)
            flightPlan.erase(it);
            break;
    }
}


// due to delay or bad weather
void Plane::rescheduleFlight(Flight &f1){
    for(auto it = flightPlan.begin(); it != flightPlan.end(); it++){
        if((*it).getFlightNumber() == f1.getFlightNumber()){
            (*it).setDepartureDate(f1.getDepartureDate());
        }
    }
}




