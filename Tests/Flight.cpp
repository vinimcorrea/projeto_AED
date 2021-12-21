#include "Flight.h"
#include "Passenger.h"

const vector<Passenger> &Flight::getPassengers() const {
    return passengers;
}

unsigned int Flight::getFlightNumber() const {
    return flightNumber;
}

int Flight::getNumberOfLuggage() const {
    return numberOfLuggage;
}

void Flight::setNumberOfLuggage(unsigned nl){
    numberOfLuggage = nl;
}

void Flight::setDepartureDate(const Date &departureDate) {
    Flight::departureDate = departureDate;
}

const Date &Flight::getDepartureDate() const {
    return departureDate;
}

void Flight::addPassenger(Passenger &p1) {
    passengers.push_back(p1);
}

Time Flight::getDuration() const {
    return duration;
}

const string &Flight::getOriginFlight() const {
    return originFlight;
}

const string &Flight::getDestinyFlight() const {
    return destinyFlight;
}

void Flight::setDuration(const Time &duration) {
    Flight::duration = duration;
}
