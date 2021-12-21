//
// Created by Vinícius Correa on 14/12/2021.
//

#ifndef AED_PROJECT_GROUNDTRANSPORTATION_H
#define AED_PROJECT_GROUNDTRANSPORTATION_H

#include "Time.h"
#include "BST.h"
#include <string>

using namespace std;

class GroundTransportation {
    string type;
    float distanceFromAirport;
    Time time;
public:
    /**
     * @brief Constructor : t = Type, d = distance, ti = time
     * @param t
     * @param d
     * @param ti
     */

    GroundTransportation(string t, float d, time_t ti);

    /**
     * @brief Returns the distance of the stop from the airport.
     * @return distance from airport
     */
    float getDistanceFromAirport() const;

    /**
     * @brief Getter for type of transport
     * @return type of the transport
     */
    const string &getType() const;
    /**
     * @brief Getter for time
     * @return time remaining until transport arrive
     */
    const Time &getTime() const;

    void setType(const string &type);

    void setDistanceFromAirport(float distanceFromAirport);

    void setTime(const Time &time);

};


#endif //AED_PROJECT_GROUNDTRANSPORTATION_H
