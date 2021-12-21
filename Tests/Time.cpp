//
// Created by Vinícius Correa on 16/12/2021.
//

#include "Time.h"

Time::Time(int h, int m, int s)
{
    hour = h;
    minute = m;
    second = s;
}

void Time::setTime(std::string s) {
    hour = stoi(s.substr(0,2));
    minute = stoi(s.substr(3,2));
    second = stoi(s.substr(6,2));
}

void Time::setTime(int h, int m, int s)
{
    hour = h;
    minute = m;
    second = s;
}

void Time::print()
{
    cout << setw(2) << setfill('0') << hour << ":"
         << setw(2) << setfill('0') << minute << ":"
         << setw(2) << setfill('0') << second << "\n";
}

bool Time::equals(Time otherTime)
{
    if(hour == otherTime.hour &&
       minute == otherTime.minute &&
       second == otherTime.second)
        return true;
    else
        return false;
}

bool Time::operator<(const Time &t1) const{
    if(hour == t1.hour){
        if (minute == t1.minute) {
            return second < t1.second;
        }
        return minute < t1.minute;
    }
    return hour < t1.hour;
}

bool Time::operator==(const Time &t1) const {
    return hour == t1.hour && minute == t1.minute;
}