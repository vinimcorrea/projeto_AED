//
// Created by Thomas on 19/12/2021.
//

#ifndef AED_PROJECT_DATABASE_H
#define AED_PROJECT_DATABASE_H

#include <unordered_map>

#include "Airport.h"

/**
 * @file Database.h
 *
 * @brief Container for the entire database.
 */
class Database {
private:
    std::unordered_map<std::string, Airport*> airports;

    /**
     * @brief Loads the airport data from the corresponding text file.
     *
     * The text file is formatted in the following fashion:\n
     *  -name\n
     *  -city\n
     *  -code\n
     *  [blankspace]\n
     * This applies for each airport entry.
     */
    void loadAirports();

public:
    /*
     * @brief Constructor.
     */
    Database();
    /**
     * @brief Destructor.
     */
    ~Database();

    /**
     * @brief Retrieves the airport listing.
     * @return airport listing
     */
    std::unordered_map<std::string, Airport*> getAirports();

    /**
     * @brief Finds an airport based on its codename.
     * @param key -> codename of airport
     * @return pointer to found airport, or NULL if not found.
     */
    Airport* findAirport(std::string key);
};


#endif //AED_PROJECT_DATABASE_H
