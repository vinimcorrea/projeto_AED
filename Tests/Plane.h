//
// Created by Vinícius Correa on 15/12/2021.
//

#ifndef AED_PROJECT_PLANE_H
#define AED_PROJECT_PLANE_H

#include "Service.h"
#include "Flight.h"
#include "Passenger.h"
//#include "Exceptions.h"

#include <string>
#include <vector>
#include <queue>
#include <list>

/**
 * @file Plane.h
 * @brief Plane class.
 */

using namespace std;
class Flight;

class Plane{
private:
    string license;
    string type;
    unsigned capacity;
    list<Flight> flightPlan;
    queue<Service> services;
    list<Service> realizedServices;

    Plane(string lp, string type, unsigned cap) : license(lp), type(type), capacity(cap){};

public:
    /**
     * @brief Constructor.
     * @param lp -> license plate code
     * @param type -> plane identifier
     * @param cap -> seat capacity
     * @param fp -> flight schedule
     * @param s -> servicing schedule
     */
    Plane(string lp, string type, unsigned cap, list<Flight> fp, queue<Service> s)
        : license(lp), type(type), capacity(cap), flightPlan(fp), services(s){};
    /**
     * @brief Gets the plane's license number.
     * @return the license number
     */
    const string &getLicense() const;

    /**
     * @brief Gets the plane's type code.
     * @return the type code
     */
    const string &getType() const;

    /**
     * @brief Gets the plane's seat capacity.
     * @return the seat capacity
     */
    const unsigned& getCapacity() const;

    /**
     * @brief Gets the flight schedule list
     * @return flight schedule
     */
    const list<Flight> &getFlight() const;

    /**
     * @brief Gets the number of currently scheduled flights.
     * @return Number of flights
     */
    const int getNumberOfFlights() const;

    /**
     * @brief Gets the pending service list.
     * @return pending service list
     */
    const queue<Service> &getServices() const;

    /**
     * @brief Gets the list of past services carried out.
     * @return list of past services
     */
    const list<Service>& getPastServices() const;

    /**
     * @brief Adds a new service to the schedule
     * @param service -> new service
     */
     void addService(const Service& s1);

     /**
      * @brief Executes the exit service, putting it in the past services list.
      */
     void executeService();

    /**
     * @param flightNumber
     * @return
     */

    int numPassengers(unsigned flightNumber) const;

    /**
     *
     */
    void doneService();

    /**
     *
     * @param p1
     * @param flNumber
     * @return
     */
    bool passengerGetTicket(Passenger &p1, unsigned flNumber);

    /**
     * @brief Schedules a new flight at the end of main schedule
     * @param flight -> new flight
     */
    void addFlight(Flight flight);

    /**
     * @brief Cancels a flight and all subsequent ones.
     * @param flNumber -> flight to cancel
     */
    void cancelFlight(unsigned flNumber);

    /**
     * @brief Reschedules a flight.
     * @param n -> number of flight to reschedule
     * @param date -> new date
     */
    void rescheduleFlight(const unsigned& n, const Date& date);

    /**
     *
     * @param id
     * @return
     */

    bool searchFlight(unsigned id) const;

    enum FlightSortOptions{
        SORT_NUMBERS=0,
        SORT_DEPARTURES=1,
        SORT_DURATION=2,
        SORT_ORIGIN=3,
        SORT_DESTINATION=4
    };

    /**
     * @brief Sorts the flight list based on input value
     * @param c1 -> input value
     * @return sorted list
     */
    list<Flight> sortByUserInput(const int & c1);

    list<Flight> filterByDestination(std::string city);
};

#endif //AED_PROJECT_PLANE_H
