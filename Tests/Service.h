//
// Created by Vinícius Correa on 01/12/2021.
//

#ifndef AED_PROJECT_SERVICE_H
#define AED_PROJECT_SERVICE_H

#include <ctime>
#include <string>
#include "Employee.h"

using namespace std;



class Service {
    string type;
    string date;

public:
    Service(string type, string date, Employee employee) : type(type), date(date) {};
    void addService(Service& s1);
    Service getService() const;
    enum ServiceType {CLEANING, MAINTENANCE};
    void setService(Service& service);
    const string &getType() const;
    const string &getEmployee() const;
    void setEmployee(const string &employee);
    time_t getDate() const;
    void setDate(time_t date);
    void setType(const string &type);
    bool operator<(const Service& s1) const;

};


#endif //AED_PROJECT_SERVICE_H
