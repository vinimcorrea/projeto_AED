//
// Created by Vinícius Correa on 01/12/2021.
//

#ifndef AED_PROJECT_PASSENGER_H
#define AED_PROJECT_PASSENGER_H
#include <string>
#include <ctime>

using namespace std;


class passenger {
    passenger(unsigned id, unsigned nLuggage);
    unsigned id;
    int getLuggage() const;
    void setLuggage();

    vector<passenger> passengers;
    unsigned numberLuggage;

};


#endif //AED_PROJECT_PASSENGER_H
