//
// Created by Vinícius Correa on 01/12/2021.
//

#ifndef AED_PROJECT_FLIGHT_H
#define AED_PROJECT_FLIGHT_H
#include <string>
#include <ctime>
#include "plane.h"

using namespace std;


class flight {
public:

    flight(int flightNumber, plane plane, time_t duration, time_t departureDate);
    bool getTicket() const;
    int getSeat() const;
    void setSeat();
    int getFlightNumber() const;
    time_t getDepartureDate() const;
    time_t getFlightDuration() const;
    string getOrigin() const;
    string getDestiny() const;


private:
    int flightNumber;
    time_t flightDuration;
    time_t departureDate;
    string origin;
    string destiny;



};


#endif //AED_PROJECT_FLIGHT_H
