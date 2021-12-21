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
    Airport(string n, string c, string code): localInformation(GroundTransportation("", 0.0, list<time_t>())),
    name(n), city(c), code(code) {};

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
     *        Only adds if no other plane with the same license plate exists.
     * @param plane -> pointer to plane to add
     * @return true if successful, false otherwise
     */
    bool addPlane(Plane* plane);

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

    /**
     * @brief Gets information on local public transports.
     * @return binary search tree with information
     */
    const BST<GroundTransportation> &getLocalInformation() const;
    void addLocalInformation();

};


#endif //AED_PROJECT_AIRPORT_H

