//
// Created by Thomas on 19/12/2021.
//

#include "Database.h"

#include <fstream>
#include <string>

#define AIRPORT_FILE "airports.txt"

Database::Database() {
    loadAirports();
}

Database::~Database() {
    for(auto it=airports.begin(); it!=airports.end(); ++it)
        delete *it;
}

void Database::loadAirports() {
    std::ifstream airportFile(AIRPORT_FILE);
    if(airportFile.is_open()) {
        while (!airportFile.eof()) {
            std::string name, city, code;
            std::getline(airportFile, name);
            std::getline(airportFile, city);
            std::getline(airportFile, code);

            airports.push_back(new Airport(name, city, code));
            std::getline(airportFile, name); //dummy read
        }
    }
}