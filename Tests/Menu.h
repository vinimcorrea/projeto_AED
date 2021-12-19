//
// Created by Thomas on 17/12/2021.
//

#ifndef AED_PROJECT_MENU_H
#define AED_PROJECT_MENU_H

#include <string>

#include "Airport.h"

class Menu {
protected:
    /**
     * @brief General-purpose input sanity check function.
     *
     * @return false if an error is detected, true otherwise
     */
    static bool inputSanityCheck();

public:
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
private:
    /**
     * @brief Loads an airport's data based on the
     * @param codename
     * @return
     */
    Airport* loadAirport(std::string codename);
public:
    void displayMessage() override;
    Menu* processInput() override;
};


#endif //AED_PROJECT_MENU_H
