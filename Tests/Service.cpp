//
// Created by Vinícius Correa on 01/12/2021.
//

#include "Service.h"

const string &Service::getType() const {
    return type;
}

void Service::setType(const string &type) {
    Service::type = type;
}

time_t Service::getDate() const {
    return date;
}

void Service::setDate(time_t date) {
    Service::date = date;
}

const string &Service::getEmployee() const {
    return employee;
}

void Service::setEmployee(const string &employee) {
    Service::employee = employee;
}

bool Service::operator<(const Service& s1) const{
    return date < s1.date;
}