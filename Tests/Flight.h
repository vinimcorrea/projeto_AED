#ifndef AED_PROJECT_FLIGHT_H
#define AED_PROJECT_FLIGHT_H

#include "Passenger.h"
#include "Airport.h"
#include "Date.h"
#include "Time.h"


#include <string>
#include <utility>
#include <vector>


using namespace std;
class Airport;

class Flight{
private:
    unsigned flightNumber;
    Date departureDate;
    Time duration;
    Airport* originFlight;
    Airport* destinyFlight;
    vector<Passenger> passengers;
    int numberOfLuggage{};

public:
    int getNumberOfLuggage() const;
    void setNumberOfLuggage(unsigned numberOfLuggage);

    Flight(unsigned flightNumber, Date departureDate, Time duration, Airport* origin, Airport* destiny)
        :flightNumber(flightNumber), departureDate(departureDate), duration(duration),
        originFlight(std::move(std::move(origin))), destinyFlight(std::move(destiny)) {};

    const vector<Passenger> &getPassengers() const;
    unsigned int getFlightNumber() const;
    void addPassenger(Passenger& p1);

    Date getDepartureDate() const;

    void setDepartureDate(const Date &departureDate);

    void setDuration(const Time &duration);

    Time getDuration() const;

    Airport* getOriginFlight() const;

    Airport* getDestinyFlight() const;

    int getNumberOfPassengers() const;
};

#endif //AED_PROJECT_FLIGHT_H
