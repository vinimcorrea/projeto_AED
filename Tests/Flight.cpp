#include "Flight.h"
#include "Passenger.h"

const vector<Passenger> &Flight::getPassengers() const {
    return passengers;
}

unsigned int Flight::getFlightNumber() const {
    return flightNumber;
}

void Flight::setNumberOfLuggage(unsigned nl){
    numberOfLuggage = nl;
}

void Flight::setDepartureDate(const string &departureDate) {
    Flight::departureDate = departureDate;
}

const string &Flight::getDepartureDate() const {
    return departureDate;
}

void Flight::addPassenger(Passenger &p1) {
    passengers.push_back(p1);
}
