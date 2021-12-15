#ifndef AED_PROJECT_PLANE_H
#define AED_PROJECT_PLANE_H

#include "Service.h"
#include "Flight.h"
#include "Service.h"
#include "Passenger.h"

#include <string>
#include <vector>
#include <queue>
#include <list>


using namespace std;


class Plane{
    string enroll;
    unsigned capacity;
    list<Flight> flightPlan;
    queue<Service> services;
    vector<Service> realizedServices;

public:
    Plane(string en, unsigned cap, list<Flight> fp, queue<Service> s){
        enroll = en; capacity = cap; flightPlan = fp; s = services;}
    void addFlight(const Flight &f1);
    void addService(const Service &s1);
    const list<Flight> &getFlight() const;
    const queue<Service> &getServices() const;
    int numPassengers(unsigned flightNumber) const;
    void doneService();
    bool passengerGetTicket(Passenger &p1, unsigned flNumber);
    void cancelFlight(unsigned flNumber);
    void rescheduleFlight(unsigned flNumber);

};

#endif //AED_PROJECT_PLANE_H
