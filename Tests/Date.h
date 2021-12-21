//
// Created by Vinícius Correa on 16/12/2021.
//

/**
 * @file date.h
 * @brief Date class.
 */

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
    /**
     * @brief Constructor.
     */
    Date() = default; //Date format: dd-mm-yy
    /**
     * @brief Constructor.
     * @param d -> day
     * @param m -> month
     * @param y -> year
     */
    Date(int d, int m, int y){day = d; month = m; year = y;}
    /**
     * @brief Constructor.
     * @param s -> formatted string
     */
    Date(std::string s);

    /**
     * @brief Get the month.
     * @return month
     */
    int getMonth() const;
    /**
     * @brief Get the day.
     * @return day
     */
    int getDay() const;
    /**
     * @brief Change the day value.
     * @param day -> new day value
     */
    void setDay(int day);
    /**
     * @brief Change the month value.
     * @param month -> new month value.
     */
    void setMonth(int month);

    /**
     * @brief Get the year.
     * @return year
     */
    int getYear() const;
    /**
     * @brief Get the year value.
     * @param year -> new year value
     */
    void setYear(int year);

    /**
     * @brief Returns a formatted string of type "dd-mm-yy".
     * @return formatted string
     */
    std::string formatted() const;

    // readable format for humans

    //Date getDate(string str);
    /**
     * @brief Checks whether string is purely numeric.
     * @param str -> input string
     * @return true if completely numeric, false otherwise
     */
    bool is_number(string str);
    /**
     * @brief Less than operator.
     * @param d1 -> right value
     * @return true if left value is less than d1, false otherwise
     */
    bool operator<(const Date& d1) const;
    /**
     * @brief Equality operator.
     * @param d1 -> right value
     * @return true if left and right values are equal, false otherwise
     */
    bool operator==(const Date& d1) const;
};


#endif //AED_PROJECT_DATE_H
