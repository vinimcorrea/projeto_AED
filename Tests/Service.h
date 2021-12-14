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
    time_t date;
    string employee;

public:
    Service(string type, time_t date, Employee employee);
    void addService(Service service);
    Service getService() const;
    void setService(Service& service);
    const string &getType() const;
    const string &getEmployee() const;
    void setEmployee(const string &employee);
    time_t getDate() const;
    void setDate(time_t date);
    void setType(const string &type);
};


#endif //AED_PROJECT_SERVICE_H
