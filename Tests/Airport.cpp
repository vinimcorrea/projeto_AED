//
// Created by Vinícius Correa on 14/12/2021.
//

#include "Airport.h"

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

vector<Plane*>& Airport::getPlanes() {
    return planes;
}

bool Airport::addPlane(Plane *plane) {
    for(auto it=planes.begin(); it!=planes.end(); ++it){
        Plane* p = *it;
        if(p->getLicense() == plane->getLicense())
            return false;
    }
    planes.push_back(plane);
    return true;
}

Plane* Airport::findPlaneWithLicense(const std::string &filter) {
    for(auto it=planes.begin(); it!=planes.end(); ++it){
        Plane* current = *it;
        if(current->getLicense() == filter)
            return current;
    }
    return nullptr;
}

vector<Plane*> Airport::filterPlanesByType(const std::string &filter) {
    vector<Plane*> ret;

    for(auto it=planes.begin(); it!=planes.end(); ++it){
        Plane* current = *it;
        if(current->getType() == filter)
            ret.push_back(current);
    }

    return ret;
}


struct sortByCapacity{

    inline bool operator()(const Plane& p1, const Plane& p2){
        return p1.getCapacity() < p2.getCapacity();
    }
};


struct sortByNumberOfFlights{

    inline bool operator()(const Plane& p1, const Plane& p2){
        return p1.getNumberOfFlights() < p2.getNumberOfFlights();
    }
};
struct sortByType{

    inline bool operator()(const Plane& p1, const Plane& p2){
        return p1.getType() < p2.getType();
    }
};

struct sortByLicense{

    inline bool operator()(const Plane& p1, const Plane& p2){
        return p1.getLicense() < p2.getLicense();
    }
};



vector<Plane*> Airport::sortByUserInputPlanes(const int &s1) {
    switch(s1){
        case 1:
            sort(planes.begin(), planes.end(), sortByCapacity());
            return planes;
        case 2:
            sort(planes.begin(), planes.end(), sortByNumberOfFlights());
            return planes;
        case 3:
            sort(planes.begin(), planes.end(), sortByType());
            return planes;
        case 4:
            sort(planes.begin(), planes.end(), sortByLicense());
            return planes;

    }
}

