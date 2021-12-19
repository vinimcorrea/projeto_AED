//
// Created by Thomas on 19/12/2021.
//

#ifndef AED_PROJECT_DATABASE_H
#define AED_PROJECT_DATABASE_H

#include <vector>

#include "Airport.h"

/**
 * @file Database.h
 *
 * @brief Container for the entire database.
 */
class Database {
private:
    std::vector<Airport*> airports; ///Database of airports

public:
    Database();
    ~Database();
};


#endif //AED_PROJECT_DATABASE_H
