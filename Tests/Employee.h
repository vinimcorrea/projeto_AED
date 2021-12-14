#ifndef AED_PROJECT_EMPLOYEE_H
#define AED_PROJECT_EMPLOYEE_H


#include <string>
#include "Service.h"

using namespace std;

class Employee {
    int id;
    string name;
public:
    Employee(int id, string name);
    int getId() const;
    void setId(int id);
};


#endif //AED_PROJECT_EMPLOYEE_H
