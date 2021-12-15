#include "Passenger.h"
#include <vector>

Passenger::Passenger(unsigned int id, bool luggage, unsigned int nPassengers) {
    this->id = id;
    this->passengers = nPassengers;
}

unsigned int Passenger::getPassengers() const {
    return passengers;
}

bool Passenger::getLuggage() const {
    return luggage;
}
