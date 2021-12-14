#include <string>
#include <vector>
#include <queue>
#include <list>

#include "Flight.h"
#include "Service.h"

using namespace std;


class Plane{
    string enroll;
    unsigned capacity;
    list<Flight> flightPlan;
    queue<Service> services;

public:
    Plane(string enroll, unsigned capacity, list<Flight> flightPlan, queue<Service> services);
    void addFlight(const Flight &f1);
    void addService(const Service &s1);
    const list<Flight> &getFlight() const;
    const queue<Service> &getServices() const;
    unsigned getCapacity() const;
    int numPassengers(unsigned flightNumber) const;
    bool cancelFlight();

};

#ifndef AED_PROJECT_PLANE_H
#define AED_PROJECT_PLANE_H

#endif //AED_PROJECT_PLANE_H
