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




/*
bool Service::operator<(const Service& s1) const{
    return date < s1.date;
}
 */