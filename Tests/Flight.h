#ifndef AED_PROJECT_FLIGHT_H
#define AED_PROJECT_FLIGHT_H

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
    string originFlight;
    string destinyFlight;
    vector<Passenger> passengers;
    int numberOfLuggage{};
public:
    int getNumberOfLuggage() const;

public:
    void setNumberOfLuggage(unsigned numberOfLuggage);

    Flight(unsigned flightNumber, Date departureDate, unsigned duration, string origin, string destiny)
        :flightNumber(flightNumber), departureDate(departureDate), duration(duration),
        originFlight(std::move(std::move(origin))), destinyFlight(std::move(destiny)) {};
    const vector<Passenger> &getPassengers() const;
    unsigned int getFlightNumber() const;
    void addPassenger(Passenger& p1);

    const Date &getDepartureDate() const;

    void setDepartureDate(const Date &departureDate);

    void setDuration(const Time &duration);

    Time getDuration() const;

    const string &getOriginFlight() const;

    const string &getDestinyFlight() const;
};

#endif //AED_PROJECT_FLIGHT_H
