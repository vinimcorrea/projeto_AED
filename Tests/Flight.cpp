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
