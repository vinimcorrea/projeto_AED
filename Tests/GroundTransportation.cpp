//
// Created by Vinícius Correa on 14/12/2021.
//

#include "GroundTransportation.h"



GroundTransportation::GroundTransportation(string t, float d, Time ti) : type(t), distanceFromAirport(d), time(ti){}


float GroundTransportation::getDistanceFromAirport() const {
    return distanceFromAirport;
}

const string &GroundTransportation::getType() const {
    return type;
}

const Time &GroundTransportation::getTime() const {
    return time;
}

void GroundTransportation::setType(const string &type) {
    GroundTransportation::type = type;
}

/*
void GroundTransportation::setDistanceFromAirport(float distanceFromAirport) {
    GroundTransportation::distanceFromAirport = distanceFromAirport;
}
 */

void GroundTransportation::setTime(const Time &time) {
    GroundTransportation::time = time;
}

bool GroundTransportation::operator<(const GroundTransportation &g1) const {
    return distanceFromAirport < g1.distanceFromAirport;
}

bool GroundTransportation::operator==(const GroundTransportation &g2) const {
    return this->distanceFromAirport == distanceFromAirport;
}