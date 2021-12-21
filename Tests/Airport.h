//
// Created by Vinícius Correa on 14/12/2021.
//

#ifndef AED_PROJECT_AIRPORT_H
#define AED_PROJECT_AIRPORT_H

#include "BST.h"
#include "GroundTransportation.h"
#include "Plane.h"

#include <fstream>
#include <string>
#include <utility>
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


    Airport(): localInformation(GroundTransportation("", 0.0, 0)) {};
    /**
     * @brief Constructor.
     * @param n -> name of airport
     * @param c -> location of airport
     * @param code -> filename code
     */
    Airport(string n, string c, string code): localInformation(GroundTransportation("", 0.0, 0)),
    name(std::move(n)), city(std::move(c)), code(std::move(code)) {};

    const string getName();
    const string getCity();
    const string getCode();
    /**
     * @brief Gets the list of planes currently on this airport.
     * @return list of planes
     */
    vector<Plane*>& getPlanes();

    /**
     * @brief Adds a new plane to the airport's database.
     * @param plane -> pointer to plane to add
     */
    void addPlane(Plane* plane);

    /**
     * @brief Finds a plane with a specific license.
     * @param filter -> license number
     * @return Pointer to plane, NULL if not found.
     */
    Plane* findPlaneWithLicense(const std::string& filter);

    /**
     * @brief Filters the plane list by plane type
     * @param filter -> plane type
     * @return list of planes of specified type
     */
    vector<Plane*> filterPlanesByType(const std::string& filter);

    const BST<GroundTransportation> &getLocalInformation() const;
    void addLocalInformation();

    /**
     * @brief Remove ground transportation
     * @param g1
     * @return
     */

    void removeGroundTransportation(const GroundTransportation& g1);


    vector<Plane *> sortByUserInputPlanes(const int &s1);
    BST<GroundTransportation> sortByUserInputGroundTransportations(const int & s2);

    BST<GroundTransportation> filterTransportByType(const string & s0, GroundTransportation& previous, GroundTransportation& next);

    void readFile(ifstream &f);
};


#endif //AED_PROJECT_AIRPORT_H

