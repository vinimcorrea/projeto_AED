//
// Created by Vinícius Correa on 14/12/2021.
//

#include "Airport.h"

const BST<GroundTransportation> &Airport::getLocalInformation() const {
    return localInformation;
}

const string Airport::getName() {
    return name;
}

const string Airport::getCity() {
    return city;
}

const string Airport::getCode() {
    return code;
}
