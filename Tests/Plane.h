#ifndef AED_PROJECT_PLANE_H
#define AED_PROJECT_PLANE_H

#include "Service.h"
#include "Flight.h"
#include "Service.h"

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
    Plane(string enroll, unsigned capacity, list<Flight> flightPlan, queue<Service> services);
    void addFlight(const Flight &f1);
    void addService(const Service &s1);
    const list<Flight> &getFlight() const;
    const queue<Service> &getServices() const;
    unsigned getCapacity() const;
    int numPassengers(unsigned flightNumber) const;
    void doneService();
    //bool cancelFlight(Flight &f1);
    //void sortServices();

};

#endif //AED_PROJECT_PLANE_H
