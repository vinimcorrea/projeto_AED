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

    GroundTransportation(string t, float d, Time ti);

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

    /**
     * @brief Change the transport's type.
     * @param type -> new type
     */
    void setType(const string &type);

    //void setDistanceFromAirport(float distanceFromAirport);

    /**
     * @brief Change the time of next stop
     * @param time -> time
     */
    void setTime(const Time &time);

    /**
     * @brief Less than operator.
     * @param g1 -> right element
     * @return true if left<right, false otherwise
     */
    bool operator<(const GroundTransportation& g1) const;
    /**
     * @brief Equality operator
     * @param g2 -> right element
     * @return true if left equal to right, false otherwise
     */
    bool operator==(const GroundTransportation& g2) const;
};


#endif //AED_PROJECT_GROUNDTRANSPORTATION_H
