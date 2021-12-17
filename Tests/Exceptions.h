//
// Created by Vinícius Correa on 17/12/2021.
//

#ifndef AED_PROJECT_EXCEPTIONS_H
#define AED_PROJECT_EXCEPTIONS_H

#include <string>
#include <exception>

using namespace std;

class FlightDoesNotExist : public exception{
    unsigned FlightNum;

public:
    explicit FlightDoesNotExist(const unsigned &FlightNum);

    unsigned getFlight() const;
};


class FlightAlreadyExists : public exception{
    unsigned FlightNum;

public:
    explicit FlightAlreadyExists(const unsigned &FlightNum);


    unsigned getFlight() const;
};

class InvalidDate : public exception{
    string date;

public:
    InvalidDate(const string& date);

    const string &getDate() const;
};

class InvalidTime : public exception{
    string time;

public:
    InvalidTime(const string &time);

    const string &getTime() const;
};

class PassengerDoesNotExist : public exception{
    unsigned int id;

public:
    PassengerDoesNotExist(const unsigned int &id);

    unsigned int getId() const;
};

class PassengerAlreadyExits : public exception{
    unsigned int id;

public:
    PassengerAlreadyExits(const unsigned int &id);

    unsigned int getId() const;
};

class PlaneAlreadyExits : public exception{
    string enroll;

public:
    PlaneAlreadyExits(const string &enroll);

    string getEnroll() const;
};

class PlaneDoesNotExist : public exception{
    string enroll;

public:
    PlaneDoesNotExist(const string &enroll);

    string getEnroll() const;
};

#endif //AED_PROJECT_EXCEPTIONS_H
