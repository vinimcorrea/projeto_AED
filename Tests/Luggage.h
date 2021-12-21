//
// Created by Vinícius Correa on 01/12/2021.
//

#ifndef AED_PROJECT_LUGGAGE_H
#define AED_PROJECT_LUGGAGE_H

#include "Passenger.h"
#include <string>


using namespace std;


class Luggage {
    Passenger p1;
public:
    Luggage(Passenger p):p1(p){};
};


#endif //AED_PROJECT_LUGGAGE_H
