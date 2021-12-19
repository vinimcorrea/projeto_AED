//
// Created by Vinícius Correa on 14/12/2021.
//

#ifndef AED_PROJECT_AIRPORT_H
#define AED_PROJECT_AIRPORT_H

#include "BST.h"
#include "GroundTransportation.h"
#include "Plane.h"
#include <string>
#include <vector>


/**
 * @file Airport.h
 * @brief Class containing information pertaining to one airport
 */
class Airport {
    string name; ///name of the airport
    string city; ///name of the airport's location
    string code; ///codename used in files associated with this airport
    BST<GroundTransportation> localInformation;
    vector<Plane *> planes;

public:
    /**
     * @brief Constructor.
     * @param n -> name of airport
     * @param c -> location of airport
     * @param code -> filename code
     */
    Airport(string n, string c, string code): localInformation(GroundTransportation("", 0.0, 0)),
    name(n), city(c), code(code) {};

    const string getName();
    const string getCity();
    const string getCode();

    const BST<GroundTransportation> &getLocalInformation() const;
    void addLocalInformation();

};


#endif //AED_PROJECT_AIRPORT_H

