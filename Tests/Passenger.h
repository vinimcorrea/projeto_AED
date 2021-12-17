#ifndef AED_PROJECT_PASSENGER_H
#define AED_PROJECT_PASSENGER_H

#include <string>
#include "Plane.h"
#include "Flight.h"
#include "Service.h"

using namespace std;


class Passenger{
    unsigned passengers;
    bool  luggage;
    unsigned id;

public:
    bool getLuggage() const;
    Passenger(unsigned i, bool l, unsigned nPassengers){id = i; luggage = l; passengers = nPassengers;}
    bool dispatchLuggage() const;
    unsigned int getPassengers() const;
};

#endif //AED_PROJECT_PASSENGER_H
