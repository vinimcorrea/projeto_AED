//
// Created by Thomas on 17/12/2021.
//

#ifndef AED_PROJECT_MENU_H
#define AED_PROJECT_MENU_H

#include <string>

#include "Airport.h"
#include "Database.h"

/**
 * @file Menu.h
 * @brief User interface managers.
 */

class Menu {
protected:
    Database* database;

    /**
     * @brief General-purpose input sanity check function.
     *
     * @return false if an error is detected, true otherwise
     */

    static bool inputSanityCheck();

    /**
     * @brief General-purpose input entry handler.
     *
     * @param msg -> message to output before input
     * @return converted user input
     */
    template<class T>
    T inputHandler(std::string msg);

    /**
     * @brief Displays a table containing information about a database.
     *
     * @param t -> data pool to construct the data from
     */
    void displayTable(const vector<Plane* > planes) const;

    std::string formatEntry(const std::string& entry, int length) const;

public:
    /**
     * @brief Constructor.
     * @param database -> pointer to current database
     */
    Menu(Database* database) : database(database) {};

    /**
     * @brief Displays the menu's main screen.
     */
    virtual void displayMessage();

    /**
     * @brief Processes user input, then specifies which menu to jump to.
     *
     * this -> does not change menu
     * nullptr -> signal to go back a menu
     * @return the menu to jump to
     */
    virtual Menu* processInput();
    //static void applicationMenu();
};


class AirportMenu : public Menu{
public:
    AirportMenu(Database* database) : Menu(database) {};
    void displayMessage() override;
    Menu* processInput() override;
};


class MainMenu : public Menu{
protected:
    Airport* currentAirport;
public:
    MainMenu(Database* database, Airport* airport) : Menu(database), currentAirport(airport) {};
    void displayMessage() override;
    Menu* processInput() override;
};


class PlaneMenu : public MainMenu{
private:
    /**
     * @brief Adds a new plane to the current airport's database.
     */
    void createPlane();
    void removePlane();
public:
    PlaneMenu(Database* database, Airport* airport) : MainMenu(database, airport) {};
    void displayMessage() override;
    Menu* processInput() override;
};


class LocalTransportMenu : public Menu{
public:
    LocalTransportMenu(Database* database) : Menu(database) {};
    void displayMessage() override;
    Menu* processInput() override;
};

#endif //AED_PROJECT_MENU_H
