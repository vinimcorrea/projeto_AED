//
// Created by Vinícius Correa on 01/12/2021.
//

#ifndef AED_PROJECT_FLIGHT_H
#define AED_PROJECT_FLIGHT_H
#include <string>
#include <ctime>

using namespace std;


class flight {
    int flightNumber;
    time_t flightDuration;
    time_t departureDate;
    string origin;
    string destiny;


    bool getTicket() const;
    int getSeat() const;
    void setSeat();

};


#endif //AED_PROJECT_FLIGHT_H
