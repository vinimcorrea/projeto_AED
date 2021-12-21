//
// Created by Vinícius Correa on 16/12/2021.
//

#ifndef AED_PROJECT_TIME_H
#define AED_PROJECT_TIME_H
#include<iostream>
#include<iomanip>

using namespace std;

class Time {
    int hour;
    int minute;
    int second;
public :
    //constructor with default value 0
    Time(int h = 0, int m  = 0, int s = 0);
    //setter function
    void setTime(int h, int m, int s);
    void setTime(std::string s);
    //print description of object in hh:mm:ss
    void print();
    //compare two time object
    bool equals(Time);
    bool operator<(const Time &t1) const;
    bool operator==(const Time &t1) const;
};


#endif //AED_PROJECT_TIME_H
