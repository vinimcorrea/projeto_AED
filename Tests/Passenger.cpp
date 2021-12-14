#include "Passenger.h"
#include <vector>

Passenger::Passenger(unsigned int id, unsigned int nLuggage, unsigned int nPassengers) {
    this->id = id;
    this->numberLuggage = nLuggage;
    this->passengers = nPassengers;
}