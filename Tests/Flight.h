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
    /**
     * @brief Gets the number of luggage.
     * @return nº of luggage
     */
    int getNumberOfLuggage() const;
    /**
     * @brief Changes the number of luggage.
     * @param numberOfLuggage -> new nº of luggage
     */
    void setNumberOfLuggage(unsigned numberOfLuggage);

    /**
     * @brief Constructor.
     * @param flightNumber -> flight number identifier
     * @param departureDate -> departure date
     * @param duration -> flight duration
     * @param origin -> origin airport
     * @param destiny -> destination airport
     */
    Flight(unsigned flightNumber, Date departureDate, Time duration, Airport* origin, Airport* destiny)
        :flightNumber(flightNumber), departureDate(departureDate), duration(duration),
        originFlight(std::move(std::move(origin))), destinyFlight(std::move(destiny)) {};

    /**
     * @brief Get the vector of passengers.
     * @return passengers
     */
    const vector<Passenger> &getPassengers() const;
    /**
     * @brief Get the flight's ID.
     * @return identifier number
     */
    unsigned int getFlightNumber() const;
    /**
     * @brief Add a new passenger to this flight.
     * @param p1 -> new passenger
     */
    void addPassenger(Passenger& p1);

    /**
     * @brief Get the departure date.
     * @return departure date
     */
    Date getDepartureDate() const;

    /**
     * @brief Set the departure date.
     * @param departureDate -> departure date
     */
    void setDepartureDate(const Date &departureDate);

    //void setDuration(const Time &duration);

    /**
     * @brief Get flight duration.
     * @return duration
     */
    Time getDuration() const;

    /**
     * @brief Get the origin airport.
     * @return pointer to origin airport
     */
    Airport* getOriginFlight() const;

    /**
     * @brief Get the destiny airport.
     * @return pointer to destination airport
     */
    Airport* getDestinyFlight() const;

    /**
     * @brief Get the number of passengers.
     * @return number of passengers
     */
    int getNumberOfPassengers() const;
};

#endif //AED_PROJECT_FLIGHT_H
