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



class Airport {
    string name;
    string city;
    BST<GroundTransportation> localInformation;
    vector<Plane *> planes;

public:
    Airport(string n, string c): localInformation(GroundTransportation("", 0.0, 0)){name = n; city = c;}
    const BST<GroundTransportation> &getLocalInformation() const;
    void addLocalInformation();

};


#endif //AED_PROJECT_AIRPORT_H

