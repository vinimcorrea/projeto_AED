#ifndef AED_PROJECT_PASSENGER_H
#define AED_PROJECT_PASSENGER_H

#include <string>
//#include "Plane.h"
//#include "Flight.h"
//#include "Service.h"

using namespace std;


class Passenger{
    bool  luggage;

public:
    bool getLuggage() const;
    Passenger(bool l):luggage(l){};
};

#endif //AED_PROJECT_PASSENGER_H
