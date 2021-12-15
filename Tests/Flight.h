#ifndef AED_PROJECT_FLIGHT_H
#define AED_PROJECT_FLIGHT_H

#include "Passenger.h"


#include <string>
#include <vector>


using namespace std;

class Flight{
    unsigned flightNumber;
    string departureDate;
    unsigned duration;
    string originFlight;
    string destinyFlight;
    vector<Passenger> passengers;
    int numberOfLuggage;
public:
    int getNumberOfLuggage() const;

public:
    void setNumberOfLuggage(unsigned numberOfLuggage);

    Flight(unsigned flightNumber, string departureDate, unsigned duration, string origin, string destiny);
    const vector<Passenger> &getPassengers() const;
    unsigned int getFlightNumber() const;
    void insertPassenger(Passenger& p1);
};

#endif //AED_PROJECT_FLIGHT_H
