//
// Created by Vinícius Correa on 14/12/2021.
//

#ifndef AED_PROJECT_GROUNDTRANSPORTATION_H
#define AED_PROJECT_GROUNDTRANSPORTATION_H

#include <string>

using namespace std;

class GroundTransportation {
    string type;
    float distanceFromAirport;
    time_t time;
public:
    GroundTransportation(string t, float d, time_t ti)
        : type(t), distanceFromAirport(d), time(ti){};

    /**
     * @brief Returns the distance of the stop from the airport.
     * @return distance from airport
     */
    float getDistanceFromAirport() const;
};


#endif //AED_PROJECT_GROUNDTRANSPORTATION_H
