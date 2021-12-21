//
// Created by Vinícius Correa on 14/12/2021.
//

#ifndef AED_PROJECT_AIRPORT_H
#define AED_PROJECT_AIRPORT_H

#include "BST.h"
#include "GroundTransportation.h"
#include "Plane.h"
#include "Trolley.h"

#include <fstream>
#include <string>
#include <utility>
#include <list>

#define TROLLEY_NCARRIAGE 4
#define TROLLEY_NSTACK 3
#define TROLLEY_NLUGGAGE 5

/**
 * @file Airport.h
 * @brief Class containing information pertaining to one airport
 */

class Plane;

class Airport {
private:
    string name; ///name of the airport
    string city; ///name of the airport's location
    string code; ///codename used in files associated with this airport
    BST<GroundTransportation> localInformation;
    list<Plane *> planes;
    Trolley trolley;
public:
    Airport(): localInformation(GroundTransportation("", 0.0, 0)),
    trolley(Trolley(TROLLEY_NCARRIAGE, TROLLEY_NSTACK, TROLLEY_NLUGGAGE)) {};
    /**
     * @brief Constructor.
     * @param n -> name of airport
     * @param c -> location of airport
     * @param code -> filename code
     */
    Airport(string n, string c, string code): localInformation(GroundTransportation("", 0.0, 0)),
        trolley(Trolley(TROLLEY_NCARRIAGE, TROLLEY_NSTACK, TROLLEY_NLUGGAGE)),
        name(std::move(n)), city(std::move(c)), code(std::move(code)) {};

    /**
     * @brief Destructor.
     */
    ~Airport();

    /**
     * @brief Gets the airport's name.
     * @return name
     */
    const string getName();
    /**
     * @brief Gets the airport's city.
     * @return city
     */
    const string getCity();
    /**
     * @brief Gets the airport's code.
     * @return code
     */
    const string getCode();
    /**
     * @brief Gets the list of planes currently on this airport.
     * @return list of planes
     */
    list<Plane*>& getPlanes();

    /**
     * @brief Adds a new plane to the airport's database.
     * @param plane -> pointer to plane to add
     */
    void addPlane(Plane* plane);

    /**
     * @brief Gets the trolley.
     * @return trolley
     */
    Trolley& getTrolley();

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
    list<Plane*> filterPlanesByType(const std::string& filter);

    /**
     * @brief Gets the airport's database on local transportation.
     * @return
     */
    const BST<GroundTransportation> &getLocalInformation() const;

    //void addLocalInformation();

    //void removeGroundTransportation(const GroundTransportation& g1);


    //list<Plane *> sortByUserInputPlanes(const int &s1);
    //BST<GroundTransportation> sortByUserInputGroundTransportations(const int & s2);

    //BST<GroundTransportation> filterTransportByType(const string & s0, GroundTransportation& previous, GroundTransportation& next);

    //void readFile(ifstream &f);
};


#endif //AED_PROJECT_AIRPORT_H

