//
// Created by Vinícius Correa on 16/12/2021.
//

#include "Date.h"

Date::Date(std::string s) {
    day = stoi(s.substr(0, 2));
    month = stoi(s.substr(3,2));
    year = stoi(s.substr(6, 2));
}

int Date::getMonth() const {
    return month;
}

void Date::setMonth(int month) {
    Date::month = month;
}

int Date::getYear() const {
    return year;
}

void Date::setYear(int year) {
    Date::year = year;
}

int Date::getDay() const {
    return day;
}

void Date::setDay(int day) {
    Date::day = day;
}

std::string Date::formatted() const {
    return (to_string(day) + "-" + to_string(month) + "-" + to_string(year));
}

Date Date::getDate(string str) {
    istringstream iss(str);

    string day_str;
    getline(iss, day_str, '-');

    string month_str;
    getline(iss, month_str, '-');

    string year_str;
    getline(iss, year_str);

    if (!is_number(day_str))
    {
        throw exception();
    }
    int day = atoi(day_str.c_str());
    if (!day)
    {
        throw exception();
    }

    if (!is_number(month_str))
    {
        throw exception();
    }
    int month = atoi(month_str.c_str());
    if (!month)
    {
        throw exception();
    }

    if (!is_number(year_str))
    {
        throw exception();
    }
    int year = atoi(year_str.c_str());
    if (!year)
    {
        throw exception();
    }

    return Date{day, month, year};
}

bool Date::is_number(string str) {
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!isdigit(str[i]))
        {
            return false;
        }
    }
    return true;
}

// using for sort
bool Date::operator<(const Date &d1) const{
    if(this->year == d1.year){
        if (this->month == d1.month) {
            return this->day < d1.day;
        }
        return this->month < d1.month;
    }
    return this->year < d1.year;
}

bool Date::operator==(const Date& d1) const{
    if (this->day == d1.day && this->month == d1.month && this->year == d1.year)
    {return true;}
    else return false;
}