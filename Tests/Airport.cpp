//
// Created by Vinícius Correa on 14/12/2021.
//

#include "Airport.h"

using namespace std;

Airport::~Airport() {
    for(auto it=planes.begin(); it!=planes.end(); ++it)
        delete *it;
}

const BST<GroundTransportation> &Airport::getLocalInformation() const {
    return localInformation;
}

const string Airport::getName() {
    return name;
}

const string Airport::getCity() {
    return city;
}

const string Airport::getCode() {
    return code;
}

list<Plane*>& Airport::getPlanes() {
    return planes;
}

Trolley& Airport::getTrolley() {
    return trolley;
}

void Airport::addPlane(Plane *plane) {
    planes.push_back(plane);
}

Plane* Airport::findPlaneWithLicense(const std::string &filter) {
    for(auto it=planes.begin(); it!=planes.end(); ++it){
        Plane* current = *it;
        if(current->getLicense() == filter)
            return current;
    }
    return nullptr;
}

list<Plane*> Airport::filterPlanesByType(const std::string &filter) {
    list<Plane*> ret;

    for(auto it=planes.begin(); it!=planes.end(); ++it){
        Plane* current = *it;
        if(current->getType() == filter)
            ret.push_back(current);
    }

    return ret;
}


struct sortByCapacity{

    inline bool operator()(const Plane* p1, const Plane* p2){
        return p1->getCapacity() < p2->getCapacity();
    }
};


struct sortByNumberOfFlights{

    inline bool operator()(const Plane* p1, const Plane* p2){
        return p1->getNumberOfFlights() < p2->getNumberOfFlights();
    }
};
struct sortByType{

    inline bool operator()(const Plane* p1, const Plane* p2){
        return p1->getType() < p2->getType();
    }
};

struct sortByLicense{

    inline bool operator()(const Plane* p1, const Plane* p2){
        return p1->getLicense() < p2->getLicense();
    }
};


/*
list<Plane*> Airport::sortByUserInputPlanes(const int &s1) {
    switch (s1) {
        case 1:
            planes.sort(sortByCapacity());
            return planes;
        case 2:
            planes.sort(sortByNumberOfFlights());
            return planes;
        case 3:
            planes.sort(sortByType());
            return planes;
        case 4:
            planes.sort(sortByLicense());
            return planes;
    }
    return list<Plane*>();
}
 */

/*
BST<GroundTransportation> Airport::filterTransportByType(const string &s0, GroundTransportation& previous, GroundTransportation& next) {
    BST<GroundTransportation> aux = localInformation;
    if(GroundTransportation("", 0.0, 0) == localInformation.find(GroundTransportation(s0, 0.0, 0))){
        for(auto it = localInformation.begin(); it != localInformation.end(); it++){
            if(s0 < (*it).getType()){
                next = *it;
                break;
            }
            previous = *it;
        }
    }
}
 */

/*
void Airport::readFile(ifstream &f) {
    string type, distance, hour, minute, second;

    while(!f.eof()){
        getline(f, type);
        getline(f, distance);
        getline(f, hour, ':');
        getline(f, minute, ':');
        getline(f, second);

        GroundTransportation g = GroundTransportation(type,stof(distance), (stoi(hour), stoi(minute), stoi(second)));

        localInformation.insert(g);
        getline(f, name); //dummy read
    }
}
*/