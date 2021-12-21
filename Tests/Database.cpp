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
    for(auto & airport : airports)
        delete airport.second;
}

void Database::loadAirports() {
    std::fstream airportFile;
    airportFile.open(AIRPORT_FILE, ios::in);
    while (!airportFile.eof()) {
        std::string name, city, code;
        std::getline(airportFile, name);
        std::getline(airportFile, city);
        std::getline(airportFile, code);

        airports.insert(std::pair<std::string, Airport*>{code, new Airport(name, city, code)});
        std::getline(airportFile, name); //dummy read
    }
}

unordered_map<std::string, Airport*> Database::getAirports() {
    return airports;
}

Airport* Database::findAirport(std::string key) {
    auto ret = airports.find(key);
    if(ret!=airports.end()){
        return ret->second;
    } else {
        return nullptr;
    }
}