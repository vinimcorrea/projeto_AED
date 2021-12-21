//
// Created by Vinícius Correa on 14/12/2021.
//

#include "GroundTransportation.h"

string GroundTransportation::getType() const {
    return type;
}

float GroundTransportation::getDistanceFromAirport() const {
    return distanceFromAirport;
}

list<time_t> GroundTransportation::getTimetable() {
    return timetable;
}
const string &GroundTransportation::getType() const {
    return type;
}

void GroundTransportation::setType(const string &type) {
    GroundTransportation::type = type;
}

void GroundTransportation::setDistanceFromAirport(const float& distanceFromAirport) {
    GroundTransportation::distanceFromAirport = distanceFromAirport;
}