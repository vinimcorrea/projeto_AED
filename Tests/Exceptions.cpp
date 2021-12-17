//
// Created by Vinícius Correa on 17/12/2021.
//

#include "Exceptions.h"

FlightDoesNotExist::FlightDoesNotExist(const unsigned int &FlightNum) : FlightNum(FlightNum){}
unsigned int FlightDoesNotExist::getFlight() const {
    return FlightNum;
}

InvalidTime::InvalidTime(const string &time) : time(time) {}
const string &InvalidTime::getTime() const {
    return time;
}

InvalidDate::InvalidDate(const string &date) : date(date){}
const string &InvalidDate::getDate() const {
    return date;
}

PassengerDoesNotExist::PassengerDoesNotExist(const unsigned int &id) : id(id) {}
unsigned int PassengerDoesNotExist::getId() const {
    return id;
}

PassengerAlreadyExits::PassengerAlreadyExits(const unsigned int &id) : id(id){}
unsigned int PassengerAlreadyExits::getId() const {
    return id;
}

PlaneDoesNotExist::PlaneDoesNotExist(const string &enroll) : enroll(enroll){}
string PlaneDoesNotExist::getEnroll() const {
    return enroll;
}

PlaneAlreadyExits::PlaneAlreadyExits(const string &enroll) : enroll(enroll){}
string PlaneAlreadyExits::getEnroll() const {
    return enroll;
}