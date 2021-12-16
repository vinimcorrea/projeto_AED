//
// Created by Vinícius Correa on 16/12/2021.
//

#ifndef AED_PROJECT_DATE_H
#define AED_PROJECT_DATE_H

#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <stdexcept>

using namespace std;

class Date {
    int day;
    int month;
    int year;
public:
    Date() = default; //Date format: dd-mm-yy
    Date(int d, int m, int y){day = d; month = m; year = y;}

    int getMonth() const;
    int getDay() const;
    void setDay(int day);
    void setMonth(int month);
    int getYear() const;
    void setYear(int year);

    // readable format for humans
    Date getDate(string str);
    bool is_number(string str);
    bool operator <(const Date & d1) const;
    bool operator==(const Date& d1) const;
};


#endif //AED_PROJECT_DATE_H
