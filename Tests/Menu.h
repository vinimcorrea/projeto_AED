//
// Created by Thomas on 17/12/2021.
//

#ifndef AED_PROJECT_MENU_H
#define AED_PROJECT_MENU_H

#include <string>

#include "Airport.h"
#include "Database.h"
#include "Service.h"

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
     * @param planes -> data pool to construct the data from
     */
    void displayTable(const list<Plane* >& planes) const;
    /**
     * @brief Displays a table containing information about a database.
     *
     * @param planes -> data pool to construct the data from
     */
    void displayTable(const list<Flight>& flights) const;
    /**
     * @brief Displays a table containing information about a database.
     *
     * @param services -> data pool to construct the data from
     */
    void displayTable(const list<Service>& services) const;
    /**
     * @brief Displays a table containing information about a database.
     *
     * @param localTransports -> data pool to construct the data from
     */
    void displayTable(const BST<GroundTransportation>& localTransports) const;

    /**
     * @brief Formats a string for table output.
     * @param entry -> input string
     * @param length -> width of table field
     * @return formatted string
     */
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
    /**
     * @brief Constructor.
     * @param database -> pointer to current database
     */
    AirportMenu(Database* database) : Menu(database) {};
    /**
     * @brief Displays the menu's main screen.
     */
    void displayMessage() override;
    /**
     * @brief Processes user input, then specifies which menu to jump to.
     *
     * this -> does not change menu
     * nullptr -> signal to go back a menu
     * @return the menu to jump to
     */
    Menu* processInput() override;
};


class MainMenu : public Menu{
protected:
    Airport* currentAirport;
public:
    MainMenu(Database* database, Airport* airport) : Menu(database), currentAirport(airport) {};
    /**
  * @brief Displays the menu's main screen.
  */
    void displayMessage() override;
    /**
     * @brief Processes user input, then specifies which menu to jump to.
     *
     * this -> does not change menu
     * nullptr -> signal to go back a menu
     * @return the menu to jump to
     */
    Menu* processInput() override;
};


class PlaneMenu : public MainMenu{
private:
    /**
     * @brief Adds a new plane to the current airport's database.
     */
    void createPlane();
    /**
     * @brief Displays plane database according to user input.
     */
    void planeTable();
    /**
     * @brief Removes a plane from the database.
     */
    void removePlane();
public:
    PlaneMenu(Database* database, Airport* airport) : MainMenu(database, airport) {};
    /**
  * @brief Displays the menu's main screen.
  */
    void displayMessage() override;
    /**
     * @brief Processes user input, then specifies which menu to jump to.
     *
     * this -> does not change menu
     * nullptr -> signal to go back a menu
     * @return the menu to jump to
     */
    Menu* processInput() override;
};


class FlightMenu : public MainMenu{
private:
    /**
     * @brief Schedules a new flight according to user input.
     */
    void scheduleFlight();
    /**
     * @brief Displays table of flights according to user input
     */
    void flightTable();
public:
    FlightMenu(Database* database, Airport* airport) : MainMenu(database, airport) {};
    /**
  * @brief Displays the menu's main screen.
  */
    void displayMessage() override;
    /**
     * @brief Processes user input, then specifies which menu to jump to.
     *
     * this -> does not change menu
     * nullptr -> signal to go back a menu
     * @return the menu to jump to
     */
    Menu* processInput() override;
};

class ServiceMenu : public MainMenu{
private:
    /**
     * @brief Schedules a new service according to user input.
     */
    void addService();
    /**
     * @brief Displays next and last services.
     */
    void serviceTable();
    /**
     * @brief Executes next service for specified plane.
     */
    void executeService();
public:
    ServiceMenu(Database* database, Airport* airport) : MainMenu(database, airport) {};
    /**
  * @brief Displays the menu's main screen.
  */
    void displayMessage() override;
    Menu* processInput() override;
};

class ClientMenu : public MainMenu{
private:
    /**
     * @brief Adds tickets to database according to user input.
     */
    void addTicket();
public:
    ClientMenu(Database* database, Airport* airport) : MainMenu(database, airport) {};
    /**
  * @brief Displays the menu's main screen.
  */
    void displayMessage() override;
    /**
     * @brief Processes user input, then specifies which menu to jump to.
     *
     * this -> does not change menu
     * nullptr -> signal to go back a menu
     * @return the menu to jump to
     */
    Menu* processInput() override;
};


class LocalTransportMenu : public MainMenu{
private:
    /**
     * @brief Displays table of local transports, formatted according to user input.
     */
    void transportTable();
    /**
     * @brief Adds a new service to the schedule according to user input
     */
    void addService();
public:
    LocalTransportMenu(Database* database, Airport* airport) : MainMenu(database, airport) {};
    /**
  * @brief Displays the menu's main screen.
  */
    void displayMessage() override;
    /**
     * @brief Processes user input, then specifies which menu to jump to.
     *
     * this -> does not change menu
     * nullptr -> signal to go back a menu
     * @return the menu to jump to
     */
    Menu* processInput() override;
};

#endif //AED_PROJECT_MENU_H
