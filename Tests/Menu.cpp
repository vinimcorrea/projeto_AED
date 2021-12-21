//
// Created by Thomas on 17/12/2021.
//

#include <iomanip>
#include <iostream>
#include <limits>
#include "Menu.h"

#define PLANETABLE_LICENSE_WIDTH 20
#define PLANETABLE_TYPE_WIDTH 19
#define PLANETABLE_CAPACITY_WIDTH 18
#define PLANETABLE_NFLIGHTS_WIDTH 18

//--- Menu ------------------------------------------------

bool Menu::inputSanityCheck() {
    if(std::cin.fail()){
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return false;
    }
    return true;
}

void Menu::displayMessage() {
    std::cout << "This menu should not be displayed." << std::endl;
}

Menu* Menu::processInput() {
    return nullptr;
}

template <class T>
T Menu::inputHandler(std::string msg) {
    while(true) {
        T ret;
        std::cout << msg;
        std::cin >> ret;
        if(inputSanityCheck()) {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return ret;
        }
    }
}

void Menu::displayTable(const vector<Plane *> planes) const {
    std::cout << "╔════════════════════╤═══════════════════╤══════════════════╤══════════════════╗" << std::endl;
    std::cout << "║license number      │type               │seat capacity     │scheduled flights ║" << std::endl;
    std::cout << "║                    │                   │                  │                  ║" << std::endl;
    std::cout << setiosflags(std::ios::left);
    for(Plane* p : planes){
        std::string license = formatEntry(p->getLicense(), PLANETABLE_LICENSE_WIDTH);
        std::string type = formatEntry(p->getType(), PLANETABLE_TYPE_WIDTH);
        std::string capacity = formatEntry(to_string(p->getCapacity()), PLANETABLE_CAPACITY_WIDTH);
        std::string nFlights = formatEntry(to_string(p->getNumberOfFlights()), PLANETABLE_NFLIGHTS_WIDTH);

        std::cout << "║" << setw(PLANETABLE_LICENSE_WIDTH) << license;
        std::cout << "│" << setw(PLANETABLE_TYPE_WIDTH) << type;
        std::cout << "│" << setw(PLANETABLE_CAPACITY_WIDTH) << capacity;
        std::cout << "│" << setw(PLANETABLE_NFLIGHTS_WIDTH) << nFlights << "║\n";
        std::cout << "║                    │                   │                  │                  ║" << std::endl;
    }
    std::cout << "╚════════════════════╧═══════════════════╧══════════════════╧══════════════════╝" << std::endl;
    std::cout << setw(0);
}

std::string Menu::formatEntry(const std::string &entry, int length) const{
    if(entry.size() > length)
        return entry.substr(0, length-3) + "...";
    return entry;
}

//--- Airport Menu ----------------------------------------

void AirportMenu::displayMessage() {
    std::cout << "Welcome to the VRG Airline Management System." << std::endl;
    std::cout << "Please enter the codename of the desired airport, or \'q\' to quit to the command line." << std::endl;
    std::cout << std::endl;
    std::cout << "Currently available airports:" << std::endl << std::endl;
    for(auto airport : database->getAirports()){
        std::cout << airport.second->getName() << " ("
        << airport.second->getCity() << ") : "
        << airport.second->getCode() << std::endl;
    }
}

Menu* AirportMenu::processInput() {
    std::string userInput;

    std::cin >> userInput;

    if(inputSanityCheck()){
        if(userInput == "q")
            return nullptr;
        auto targetAirport = database->getAirports().find(userInput);
        if(targetAirport != database->getAirports().end()){
            return new MainMenu(database, targetAirport->second);
        }
    }

    std::cout << "Invalid user input." << std::endl;
    return this;
}

void MainMenu::displayMessage() {
    std::cout << "Currently accessing: " << currentAirport->getName() << std::endl;
    std::cout << "╔══════════════════════════════════════════════════════════════════════════════╗" << std::endl;
    std::cout << "║                                                                              ║" << std::endl;
    std::cout << "║ [1] AIRCRAFT MANAGEMENT SYSTEM                                               ║" << std::endl;
    std::cout << "║ [2] FLIGHT SCHEDULING SYSTEM                                                 ║" << std::endl;
    std::cout << "║ [3] SERVICE SCHEDULING SYSTEM                                                ║" << std::endl;
    std::cout << "║ [4] CLIENT MANAGEMENT SYSTEM                                                 ║" << std::endl;
    std::cout << "║ [5] BAGGAGE AUTOMATIC CHECK-IN SERVICE MANAGEMENT                            ║" << std::endl;
    std::cout << "║ [6] LOCAL TRANSPORT SEARCH SYSTEM MANAGEMENT                                 ║" << std::endl;
    std::cout << "║                                                                              ║" << std::endl;
    std::cout << "║ [q] Go back                                                                  ║" << std::endl;
    std::cout << "╚══════════════════════════════════════════════════════════════════════════════╝" << std::endl;
}

Menu* MainMenu::processInput() {
    std::string userInput;

    std::cin >> userInput;

    if(inputSanityCheck()){
        if(userInput == "q")
            return nullptr;

        switch(stoi(userInput)){
            case 1:
                return new PlaneMenu(database, currentAirport);
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                return new LocalTransportMenu(database);
        };
    }

    std::cout << "Invalid user input." << std::endl;
    return this;
}


void PlaneMenu::displayMessage() {
    std::cout << "╔══════════════════════════════════════════════════════════════════════════════╗" << std::endl;
    std::cout << "║                                                                              ║" << std::endl;
    std::cout << "║ [1] Add new aircraft into airport's database                                 ║" << std::endl;
    std::cout << "║ [2] Display current airport's aircraft database.                             ║" << std::endl;
    std::cout << "║ [3] Delete aircraft from current database                                    ║" << std::endl;
    std::cout << "║                                                                              ║" << std::endl;
    std::cout << "║ [q] Go back                                                                  ║" << std::endl;
    std::cout << "╚══════════════════════════════════════════════════════════════════════════════╝" << std::endl;
}

Menu* PlaneMenu::processInput() {
    std::string userInput;

    std::cin >> userInput;

    if(inputSanityCheck()) {
        if (userInput == "q")
            return nullptr;

        switch (stoi(userInput)) {
            case 1:
                createPlane();
                break;
            case 2:
                displayTable(currentAirport->getPlanes());
                break;
            case 3:
                removePlane();
                break;
        };
    }

    return this;
}


void LocalTransportMenu::displayMessage() {
    std::cout << "╔══════════════════════════════════════════════════════════════════════════════╗" << std::endl;
    std::cout << "║ [1] Search an airport's local transport database                             ║" << std::endl;
    std::cout << "║                                                                              ║" << std::endl;
    std::cout << "║ [q] Go back                                                                  ║" << std::endl;
    std::cout << "╚══════════════════════════════════════════════════════════════════════════════╝" << std::endl;
}

Menu* LocalTransportMenu::processInput() {
    std::string userInput;

    std::cin >> userInput;

    if(inputSanityCheck()){
        if(userInput == "q")
            return nullptr;
        switch(stoi(userInput)){
            case 1:
                break;
        };
    }

    std::cout << "Invalid user input." << std::endl;
    return this;
}

void PlaneMenu::createPlane() {
    std::string plate = inputHandler<std::string>("Please enter the plane's license number : ");
    std::string type = inputHandler<std::string>("Please enter the plane's type code : ");
    unsigned capacity = inputHandler<unsigned>("Please enter the plane's seat capacity : ");

    Plane* newPlane = new Plane(plate, type, capacity, list<Flight>(), queue<Service>());
    std::cout << newPlane->getNumberOfFlights() << '\n';
    std::cout << newPlane->getCapacity() << '\n';
    std::cout << newPlane->getType() << '\n';
    std::cout << newPlane->getLicense() << '\n';

    currentAirport->addPlane(new Plane(plate, type, capacity, list<Flight>(), queue<Service>()));
    std::cout << "New aircraft successfully added to database.\n";
}

void PlaneMenu::removePlane() {
    std::cout << "The currently available planes are defined by the following licenses:\n";
    for(Plane* plane : currentAirport->getPlanes())
        std::cout << plane->getLicense() << std::endl;
    std::string rmCode = inputHandler<std::string>(
            "Please type the license number of the plane you wish to delete : ");

    for(std::vector<Plane*>::iterator it=currentAirport->getPlanes().begin(); it!=currentAirport->getPlanes().end(); ++it){
        Plane* rmPlane = *it;
        if(rmPlane->getLicense() == rmCode){
            delete *it;
            currentAirport->getPlanes().erase(it);
            std::cout << "Aircraft successfully deleted.\n";
            return;
        }
    }

    std::cout << "The license number specified does not exist in this airport's database.\n";
}

/*
static void ApplicationMenu(){
    //For now this is just a reference. TODO the actual functionality.

    std::cout << "Welcome to the VRG Airline Management System." << std::endl;
    std::cout << "Please choose one of the following options:" << std::endl;
    std::cout << std::endl;
    std::cout << "╔══════════════════════════════════════╤═══════════════════════════════════════╗" << std::endl;
    std::cout << "║                                      │                                       ║" << std::endl;
    std::cout << "║ AIRCRAFT MANAGEMENT:                 │ FLIGHT MANAGEMENT:                    ║" << std::endl;
    std::cout << "║ [1] Add aircraft to database         │ [1] Schedule flight                   ║" << std::endl;
    std::cout << "║ [2] Remove aircraft from database    │ [2] Cancel flight                     ║" << std::endl;
    std::cout << "║ [3] Print aircraft database          │ [3] Reschedule flight                 ║" << std::endl;
    std::cout << "║ [4] Edit aircraft data               │ [4] Print flight database             ║" << std::endl;
    std::cout << "╠══════════════════════════════════════╪═══════════════════════════════════════╣" << std::endl;
    std::cout << "║ SERVICE MANAGEMENT:                  │ CLIENT MANAGEMENT:                    ║" << std::endl;
    std::cout << "║ [1] Schedule new service             │ [1] Register order                    ║" << std::endl;
    std::cout << "║ [2] Mark service as finished         │ [2] Print ticket database             ║" << std::endl;
    std::cout << "║ [3] See upcoming service             │ [3] Unregister order                  ║" << std::endl;
    std::cout << "║ [4] Print past service database      │                                       ║" << std::endl;
    std::cout << "║ [5] Cancel next service              │                                       ║" << std::endl;
    std::cout << "╠══════════════════════════════════════╪═══════════════════════════════════════╣" << std::endl;
    std::cout << "║ AUTO CHECK-IN SERVICE MANAGEMENT:    │ LOCAL TRANSPORT DATABASE MANAGEMENT:  ║" << std::endl;
    std::cout << "║ [1] Print baggage transport status   │ [1] Display airport's database        ║" << std::endl;
    std::cout << "║ [2] Move baggage to aircraft         │ [2] Add new airport database          ║" << std::endl;
    std::cout << "║                                      │ [3] Remove airport database           ║" << std::endl;
    std::cout << "║                                      │ [4] Add entry to database             ║" << std::endl;
    std::cout << "║                                      │ [5] Remove entry from database        ║" << std::endl;
    std::cout << "╠══════════════════════════════════════╧═══════════════════════════════════════╣" << std::endl;
    std::cout << "║ [s] Save changes                                                             ║" << std::endl;
    std::cout << "║ [l] Load files                                                               ║" << std::endl;
    std::cout << "║ [q] Quit to command line                                                     ║" << std::endl;
    std::cout << "╚══════════════════════════════════════════════════════════════════════════════╝" << std::endl;
}
 */