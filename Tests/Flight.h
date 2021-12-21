#ifndef AED_PROJECT_FLIGHT_H
#define AED_PROJECT_FLIGHT_H

#include "Airport.h"
#include "Passenger.h"
#include "Date.h"
#include "Time.h"


#include <string>
#include <utility>
#include <vector>


using namespace std;

class Flight{
    unsigned flightNumber;
    Date departureDate;
    Time duration;
    Airport* originFlight;
    Airport* destinyFlight;
    vector<Passenger> passengers;
    int numberOfLuggage{};
public:
    int getNumberOfLuggage() const;

public:
    void setNumberOfLuggage(unsigned numberOfLuggage);

    Flight(unsigned flightNumber, Date departureDate, unsigned duration, Airport* origin, Airport* destiny)
        :flightNumber(flightNumber), departureDate(departureDate), duration(duration),
        originFlight(std::move(std::move(origin))), destinyFlight(std::move(destiny)) {};
    const vector<Passenger> &getPassengers() const;
    unsigned int getFlightNumber() const;
    void addPassenger(Passenger& p1);

    const Date &getDepartureDate() const;

    void setDepartureDate(const Date &departureDate);

    void setDuration(const Time &duration);

    Time getDuration() const;

    Airport* getOriginFlight() const;

    Airport* getDestinyFlight() const;

    int getNumberOfPassengers() const;
};

#endif //AED_PROJECT_FLIGHT_H
