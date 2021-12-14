#ifndef AED_PROJECT_FLIGHT_H
#define AED_PROJECT_FLIGHT_H

#include "Passenger.h"


#include <string>
#include <vector>


using namespace std;

class Flight{
    unsigned flightNumber;
    time_t departureDate;
    time_t duration;
    string originFlight;
    string destinyFlight;
    vector<Passenger> passengers;
public:
    Flight(unsigned flightNumber, time_t departureDate, time_t duration, string origin, string destiny);
    const vector<Passanger> &getPassengers() const;
    unsigned int getFlightNumber() const;
};

#endif //AED_PROJECT_FLIGHT_H
