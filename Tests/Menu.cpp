//
// Created by Thomas on 17/12/2021.
//

#include <iomanip>
#include <iostream>
#include <limits>
#include "Menu.h"
#include "Luggage.h"

#define PLANETABLE_LICENSE_WIDTH 20
#define PLANETABLE_TYPE_WIDTH 19
#define PLANETABLE_CAPACITY_WIDTH 18
#define PLANETABLE_NFLIGHTS_WIDTH 18

#define FLIGHTTABLE_NUMBER_WIDTH 15
#define FLIGHTTABLE_DATE_WIDTH 15
#define FLIGHTTABLE_ORIGIN_WIDTH 15
#define FLIGHTTABLE_DESTINY_WIDTH 15
#define FLIGHTTABLE_NPASSENGER_WIDTH 14

#define SERVICETABLE_TYPE_WIDTH 25
#define SERVICETABLE_DATE_WIDTH 25
#define SERVICETABLE_EMPLOYEE_WIDTH 26
#define SERVICE_CLEAN "cleaning"
#define SERVICE_MAINTENANCE "mainteneace"

#define TRANSTABLE_TYPE_WIDTH 25
#define TRANSTABLE_DIST_WIDTH 25
#define TRANSTABLE_TIME_WIDTH 26

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

void Menu::displayTable(const list<Plane *>& planes) const {
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

void Menu::displayTable(const list<Flight>& flights) const {
    std::cout << "╔═══════════════╤═══════════════╤═══════════════╤═══════════════╤══════════════╗" << std::endl;
    std::cout << "║number         │departure date │origin         │destination    │nº passengers ║" << std::endl;
    std::cout << "║               │               │               │               │              ║" << std::endl;
    std::cout << setiosflags(std::ios::left);
    for(Flight p : flights){
        std::string number = formatEntry(to_string(p.getFlightNumber()), FLIGHTTABLE_NUMBER_WIDTH);
        std::string date = formatEntry(p.getDepartureDate().formatted(), FLIGHTTABLE_DATE_WIDTH);
        std::string origin = formatEntry(p.getOriginFlight()->getCity(), FLIGHTTABLE_ORIGIN_WIDTH);
        std::string destination = formatEntry(p.getDestinyFlight()->getCity(), FLIGHTTABLE_DESTINY_WIDTH);
        std::string nPassengers = formatEntry(to_string(p.getNumberOfPassengers()), FLIGHTTABLE_NPASSENGER_WIDTH);
        std::cout << "║" << setw(FLIGHTTABLE_NUMBER_WIDTH) << number;
        std::cout << "│" << setw(FLIGHTTABLE_DATE_WIDTH) << date;
        std::cout << "│" << setw(FLIGHTTABLE_ORIGIN_WIDTH) << origin;
        std::cout << "│" << setw(FLIGHTTABLE_DESTINY_WIDTH) << destination;
        std::cout << "│" << setw(FLIGHTTABLE_NPASSENGER_WIDTH) << nPassengers << "║\n";
        std::cout << "║               │               │               │               │              ║" << std::endl;
    }
    std::cout << "╚═══════════════╧═══════════════╧═══════════════╧═══════════════╧══════════════╝" << std::endl;
    std::cout << setw(0);
}

void Menu::displayTable(const list<Service>& services) const {
    std::cout << "╔═════════════════════════╤═════════════════════════╤══════════════════════════╗" << std::endl;
    std::cout << "║service type             │date                     │employee name             ║" << std::endl;
    std::cout << "║                         │                         │                          ║" << std::endl;
    std::cout << setiosflags(std::ios::left);
    for(Service s : services){
        std::string type = formatEntry(s.getType(), SERVICETABLE_TYPE_WIDTH);
        std::string date = formatEntry(s.getDate().formatted(), SERVICETABLE_DATE_WIDTH);
        std::string employee = formatEntry(s.getEmployee(), SERVICETABLE_EMPLOYEE_WIDTH);
        std::cout << "│" << setw(TRANSTABLE_TYPE_WIDTH) << type;
        std::cout << "│" << setw(TRANSTABLE_DIST_WIDTH) << date;
        std::cout << "│" << setw(TRANSTABLE_DIST_WIDTH) << employee << "║";
        std::cout << "║                         │                         │                          ║" << std::endl;
    }

    std::cout << "╚═════════════════════════╧═════════════════════════╧══════════════════════════╝" << std::endl;
    std::cout << setw(0);
}

void Menu::displayTable(const BST<GroundTransportation>& localTransports) const {
    std::cout << "╔═════════════════════════╤═════════════════════════╤══════════════════════════╗" << std::endl;
    std::cout << "║transport type           │distance from airport    │arrives at                ║" << std::endl;
    std::cout << "║                         │                         │                          ║" << std::endl;
    std::cout << setiosflags(std::ios::left);
    for(BSTItrIn<GroundTransportation> it(localTransports); !it.isAtEnd(); it.advance()){
        GroundTransportation g = it.retrieve();
        std::string type = formatEntry(g.getType(), TRANSTABLE_TYPE_WIDTH);
        std::string distance = formatEntry(to_string(g.getDistanceFromAirport()), TRANSTABLE_DIST_WIDTH);
        std::string time = formatEntry(g.getTime().formatted(), TRANSTABLE_TIME_WIDTH);
        std::cout << "│" << setw(TRANSTABLE_TYPE_WIDTH) << type;
        std::cout << "│" << setw(TRANSTABLE_DIST_WIDTH) << distance;
        std::cout << "│" << setw(TRANSTABLE_TIME_WIDTH) << time;
        std::cout << "║                         │                         │                          ║" << std::endl;
    }

    std::cout << "╚═════════════════════════╧═════════════════════════╧══════════════════════════╝" << std::endl;
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
    std::cout << "║ [5] LOCAL TRANSPORT SEARCH SYSTEM MANAGEMENT                                 ║" << std::endl;
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
                return new FlightMenu(database, currentAirport);
            case 3:
                return new ServiceMenu(database, currentAirport);
            case 4:
                return new ClientMenu(database, currentAirport);
            case 5:
                return new LocalTransportMenu(database, currentAirport);
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
                planeTable();
                break;
            case 3:
                removePlane();
                break;
        };
    }

    return this;
}




void PlaneMenu::createPlane() {
    std::string plate = inputHandler<std::string>("Please enter the plane's license number : ");
    std::string type = inputHandler<std::string>("Please enter the plane's type code : ");
    unsigned capacity = inputHandler<unsigned>("Please enter the plane's seat capacity : ");

    Plane* newPlane = new Plane(plate, type, capacity, list<Flight>(), queue<Service>());

    currentAirport->addPlane(new Plane(plate, type, capacity, list<Flight>(), queue<Service>()));
    std::cout << "New aircraft successfully added to database.\n";
}

void PlaneMenu::planeTable() {
    while(true) {
        std::cout << "Available commands:\n";
        std::cout << "[1] Display all entries\n";
        std::cout << "[2] Search for plane with specific license\n";
        std::cout << "[3] Display planes of a specific type\n";
        int choice = inputHandler<int>("Input your option : ");

        std::string filter;
        Plane *desiredPlane;

        switch(choice){
            case 1:
                displayTable(currentAirport->getPlanes());
                return;
            case 2:
                filter = inputHandler<std::string>
                        ("Please enter the license number of the plane : ");
                desiredPlane = currentAirport->findPlaneWithLicense(filter);
                if(desiredPlane)
                    displayTable(list<Plane*>({desiredPlane}));
                else
                    std::cout << "Plane not found.\n";
                return;
            case 3:
                filter = inputHandler<std::string>
                        ("Please enter the type of plane you want to filter by :");
                displayTable(currentAirport->filterPlanesByType(filter));
                return;
        }

        std::cout << "Invalid option.\n";
    }
}

void PlaneMenu::removePlane() {
    std::cout << "The currently available planes are defined by the following licenses:\n";
    for(Plane* plane : currentAirport->getPlanes())
        std::cout << plane->getLicense() << std::endl;
    std::string rmCode = inputHandler<std::string>(
            "Please type the license number of the plane you wish to delete : ");

    for(std::list<Plane*>::iterator it=currentAirport->getPlanes().begin(); it!=currentAirport->getPlanes().end(); ++it){
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

//--- FlightMenu -------------------------------------------

void FlightMenu::displayMessage() {
    std::cout << "╔══════════════════════════════════════════════════════════════════════════════╗" << std::endl;
    std::cout << "║ [1] Schedule a new flight                                                    ║" << std::endl;
    std::cout << "║ [2] List flight database for a specific plane                                ║" << std::endl;
    std::cout << "║                                                                              ║" << std::endl;
    std::cout << "║ [q] Go back                                                                  ║" << std::endl;
    std::cout << "╚══════════════════════════════════════════════════════════════════════════════╝" << std::endl;
}

Menu* FlightMenu::processInput() {
    std::string userInput;

    std::cin >> userInput;

    if(inputSanityCheck()){
        if(userInput == "q")
            return nullptr;
        switch(stoi(userInput)){
            case 1:
                scheduleFlight();
                return this;
            case 2:
                flightTable();
        };
    }

    std::cout << "Invalid user input." << std::endl;
    return this;
}

void FlightMenu::scheduleFlight() {
    std::string planeLicense = inputHandler<std::string>("Please type the license number of the plane.");
    Plane* currentPlane = currentAirport->findPlaneWithLicense(planeLicense);
    if(currentPlane){
        Airport* origin;
        if(!currentPlane->getFlight().empty()) {
            std::cout << "The plane's current final stop will be at "
                      << currentPlane->getFlight().back().getOriginFlight()->getName()
                      << " (" << currentPlane->getFlight().back().getOriginFlight()->getCode() << ")"
                      << ", at date " << currentPlane->getFlight().back().getDepartureDate().formatted() << std::endl;
            origin = currentPlane->getFlight().back().getOriginFlight();
        } else {
            std::string o = inputHandler<std::string>("Origin ? ");
            origin = database->findAirport(o);

            if(!origin){
                std::cout << "No such airport.\n";
                return;
            }
        }

        std::string destination = inputHandler<std::string>("Destination ? ");
        Airport* nAirport = database->findAirport(destination);

        if(!nAirport){
            std::cout << "No such airport was found.\n";
            return;
        }
        if(nAirport->getCode() == currentPlane->getFlight().back().getOriginFlight()->getCode()){
            std::cout << "Cannot travel to same location.\n";
            return;
        }

        std::string departDate = inputHandler<std::string>("Departure date (dd-mm-yy) ? ");
        Date nDate(departDate);

        if(nDate < currentPlane->getFlight().back().getDepartureDate()){
            std::cout << "Date has to be after last flight.\n";
            return;
        }

        std::string duration = inputHandler<std::string>("Duration (hh-mm-ss) ? ");
        Time nTime;
        nTime.setTime(duration);

        currentPlane->addFlight(Flight(
                currentPlane->getFlight().back().getFlightNumber()+1,
                nDate,
                nTime,
                currentPlane->getFlight().back().getDestinyFlight(),
                nAirport
                ));
        std::cout << "Flight added.\n";

    }else{
        std::cout << "No plane was found.\n";
    }
}

void FlightMenu::flightTable() {
    std::string license = inputHandler<std::string>("Type the plane's license : ");
    Plane* currentPlane = currentAirport->findPlaneWithLicense(license);
    if(!currentPlane){
        std::cout << "Plane not found.\n";
        return;
    }

    while(true) {
        std::cout << "Available commands:\n";
        std::cout << "[1] Display all entries\n";
        std::cout << "[2] Display flights with specific destination\n";

        std::cout << "[3] Sort table by departure dates\n";
        std::cout << "[4] Sort table by duration\n";
        std::cout << "[5] Sort table by origin\n";
        std::cout << "[6] Sort table by destination\n";

        std::cout << "[9] Go back\n";

        int choice = inputHandler<int>("Input your option : ");

        std::string filter;

        switch(choice){
            case 1:
                displayTable(currentPlane->getFlight());
                break;
            case 2:
                filter = inputHandler<std::string>("Enter destination city to filter by : ");
                displayTable(currentPlane->filterByDestination(filter));
                break;
            case 3:
                displayTable(currentPlane->sortByUserInput(1));
                break;
            case 4:
                displayTable(currentPlane->sortByUserInput(2));
                break;
            case 5:
                displayTable(currentPlane->sortByUserInput(3));
                break;
            case 6:
                displayTable(currentPlane->sortByUserInput(4));
                break;

            case 9:
                return;

            default:
                std::cout << "Invalid option.\n";
        }
    }

    currentPlane->sortByUserInput(0);
}

//--- ServiceMenu ------------------------------------------

void ServiceMenu::displayMessage(){
    std::cout << "╔══════════════════════════════════════════════════════════════════════════════╗" << std::endl;
    std::cout << "║ [1] Display services                                                         ║" << std::endl;
    std::cout << "║ [2] Schedule new service                                                     ║" << std::endl;
    std::cout << "║ [3] Carry out next service                                                   ║" << std::endl;
    std::cout << "║                                                                              ║" << std::endl;
    std::cout << "║ [q] Go back                                                                  ║" << std::endl;
    std::cout << "╚══════════════════════════════════════════════════════════════════════════════╝" << std::endl;
}

Menu* ServiceMenu::processInput() {
    std::string userInput;

    std::cin >> userInput;

    if(inputSanityCheck()){
        if(userInput == "q")
            return nullptr;
        switch(stoi(userInput)){
            case 1:
                serviceTable();
                return this;
            case 2:
                addService();
                return this;
            case 3:
                executeService();
                return this;
        };
    }

    std::cout << "Invalid user input." << std::endl;
    return this;
}

void ServiceMenu::serviceTable(){
    std::string license = inputHandler<std::string>("Type the plane's license : ");
    Plane* currentPlane = currentAirport->findPlaneWithLicense(license);
    if(!currentPlane){
        std::cout << "Plane not found.\n";
        return;
    }

    while(true) {
        std::cout << "Available commands:\n";
        std::cout << "[1] Display next and last pending services\n";
        std::cout << "[2] Display all done services\n";

        std::cout << "[9] Go back\n";

        int choice = inputHandler<int>("Input your option : ");

        std::string filter;

        switch(choice){
            case 1:
                displayTable(list<Service>({
                    currentPlane->getServices().front(),
                    currentPlane->getServices().back()
                }));
                break;
            case 2:
                displayTable(currentPlane->getPastServices());
                break;

            case 9:
                return;

            default:
                std::cout << "Invalid option.\n";
        }
    }

}

void ServiceMenu::addService() {
    std::string license = inputHandler<std::string>("Type the plane's license : ");
    Plane* currentPlane = currentAirport->findPlaneWithLicense(license);
    if(!currentPlane){
        std::cout << "Plane not found.\n";
        return;
    }

    std::string type = inputHandler<std::string>("Type of service (cleaning/maintenance) ? ");
    if(type!=SERVICE_CLEAN && type!=SERVICE_MAINTENANCE){
        std::cout << "invalid service type.\n";
        return;
    }

    std::string date = inputHandler<std::string>("Maintenance date ? ");
    Date nDate(date);

    std::string employee = inputHandler<std::string>("Employee name ? ");

    currentPlane->addService(Service(type, date, employee));
    std::cout << "Service added.\n";
}

void ServiceMenu::executeService() {
    std::string license = inputHandler<std::string>("Type the plane's license : ");
    Plane* currentPlane = currentAirport->findPlaneWithLicense(license);
    if(!currentPlane){
        std::cout << "Plane not found.\n";
        return;
    }

    currentPlane->executeService();
}

//--- ClientMenu -------------------------------------------

void ClientMenu::displayMessage() {
    std::cout << "╔══════════════════════════════════════════════════════════════════════════════╗" << std::endl;
    std::cout << "║ [1] Register a ticket                                                        ║" << std::endl;
    std::cout << "║                                                                              ║" << std::endl;
    std::cout << "║ [q] Go back                                                                  ║" << std::endl;
    std::cout << "╚══════════════════════════════════════════════════════════════════════════════╝" << std::endl;
}

Menu* ClientMenu::processInput() {
    std::string userInput;

    std::cin >> userInput;

    if(inputSanityCheck()){
        if(userInput == "q")
            return nullptr;
        switch(stoi(userInput)){
            case 1:
                addTicket();
                return this;
        };
    }

    std::cout << "Invalid user input." << std::endl;
    return this;
}

void ClientMenu::addTicket() {
    std::string license = inputHandler<std::string>("Type the plane's license : ");
    Plane* currentPlane = currentAirport->findPlaneWithLicense(license);
    if(!currentPlane){
        std::cout << "Plane not found.\n";
        return;
    }

    int fNum = inputHandler<int>("Type the flight's number : ");
    for(auto it=currentPlane->getFlight().begin(); it!= currentPlane->getFlight().end(); ++it){
        if(it->getFlightNumber() == fNum){
            int nTickets = inputHandler<int>("How many tickets ? ");
            if((currentPlane->getCapacity() - it->getNumberOfPassengers()) >= fNum){
                char aCheckin = inputHandler<char>( "Auto check-in (y/n) ? ");
                if(aCheckin != 'y' && aCheckin != 'n'){
                    std::cout << "Invalid answer\n";
                    return;
                }
                bool a = aCheckin == 'y';
                for(;nTickets!=0;nTickets--){
                    Passenger p(a);
                    Luggage l(p);
                    it->addPassenger(p);
                    currentAirport->getTrolley().luggageThroughTreadmill(l);
                }
                currentAirport->getTrolley().insertLuggageIntoTrolley();
                currentAirport->getTrolley().removeLuggage();
            }
        }
    }


}

//--- LocalTransportMenu -----------------------------------


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
                transportTable();
                return this;
        };
    }

    std::cout << "Invalid user input." << std::endl;
    return this;
}

void LocalTransportMenu::transportTable() {
    while(true) {
        std::cout << "Available commands:\n";
        std::cout << "[1] Display all entries\n";
        std::cout << "[2] Search for closest local transport\n";
        int choice = inputHandler<int>("Input your option : ");

        std::string filter;

        switch(choice){
            case 1:
                displayTable(currentAirport->getLocalInformation());
                return;
            case 2:
                displayTable(BST<GroundTransportation>(currentAirport->getLocalInformation().findMin()));
                return;
            default:
                std::cout << "Invalid option.\n";
        }


    }
}