//
// Created by Vinícius Correa on 15/12/2021.
//

#ifndef AED_PROJECT_PLANE_H
#define AED_PROJECT_PLANE_H

#include "Service.h"
#include "Flight.h"
#include "Passenger.h"
#include "Exceptions.h"

#include <string>
#include <vector>
#include <queue>
#include <list>


using namespace std;


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

    void addFlight(const Flight &f1);
    void addService(const Service &s1);
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

    const list<Flight> &getFlight() const;

    /**
     * @brief Gets the number of currently scheduled flights.
     * @return Number of flights
     */
    const int getNumberOfFlights() const;

    /**
     *
     * @return
     */
    const queue<Service> &getServices() const;

    /**
     *
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
     *
     * @param flNumber
     */
    void cancelFlight(unsigned flNumber);

    /**
     *
     * @param f1
     */
    void rescheduleFlight(Flight & f1);

    /**
     *
     * @param id
     * @return
     */

    bool searchFlight(unsigned id) const;


    /**
     *
     * @param c1
     * @return
     */
    list<Flight> sortByUserInput(const int & c1);
};

#endif //AED_PROJECT_PLANE_H
