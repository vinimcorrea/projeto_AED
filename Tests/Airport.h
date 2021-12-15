//
// Created by Vinícius Correa on 14/12/2021.
//

#ifndef AED_PROJECT_AIRPORT_H
#define AED_PROJECT_AIRPORT_H

#include "BST.h"
#include "GroundTransportation.h"
#include <string>



class Airport {
    string name;
    string city;
    string country;
public:
    BST<GroundTransportation> localInformation;
    
};


#endif //AED_PROJECT_AIRPORT_H
