//
// Created by Vinícius Correa on 01/12/2021.
//

#ifndef AED_PROJECT_PASSENGER_H
#define AED_PROJECT_PASSENGER_H

#include <string>
#include <ctime>
#include "Plane.h"
#include "Flight.h"

using namespace std;


class Passenger {
    unsigned passengers;
    unsigned numberLuggage;
    unsigned id;
public:
    Passenger(unsigned id, unsigned nLuggage, unsigned nPassengers);
    int getLuggage() const;
    void setLuggage();
    bool getTicket(bool luggage);

};

#endif //AED_PROJECT_PASSENGER_H
