//
// Created by Vinícius Correa on 14/12/2021.
//

#ifndef AED_PROJECT_GROUNDTRANSPORTATION_H
#define AED_PROJECT_GROUNDTRANSPORTATION_H

#include <list>
#include <string>

using namespace std;

class GroundTransportation {
    string type;
    float distanceFromAirport;
    list<time_t> timetable;
public:
    /**
     * @brief Constructor.
     * @param t -> type of transport
     * @param d -> distance from airport
     * @param ti -> timetable
     */
    GroundTransportation(string t, float d, list<time_t> ti)
        : type(t), distanceFromAirport(d), timetable(ti){};

    /**
     * @brief Returns the type of transport.
     * @return type
     */
    string getType() const;

    /**
     * @brief Returns the distance of the stop from the airport.
     * @return distance from airport
     */
    float getDistanceFromAirport() const;

    /**
     * @brief Get timetable of transport.
     * @return timetable
     */
     list<time_t> getTimetable();
};


#endif //AED_PROJECT_GROUNDTRANSPORTATION_H
