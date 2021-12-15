//
// Created by Vinícius Correa on 14/12/2021.
//

#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Plane.h"
#include "Flight.h"
#include "Passenger.h"

using testing::Eq;

TEST(test_1, numPassengers){
    cout << "Testando 'numPassengers'" << endl;

    // ----------------------------------------

    Passenger p1(4885, 7, 5);
    Passenger p2(4123, 2, 1);
    Passenger p3(4531, 0, 1);
    Passenger p4(4984, 4, 3);
    Passenger p5(4782, 1, 1);
    Passenger p6(4817, 0, 1);

    Employee e1(10842, "João Ricardo Pinheiro");
    Employee e2(10074, "Tiago Machado Silva");

    Service s1("limpeza", "19-12-2021", e1);
    Service s2("manutenção", "19-12-2021", e2);

    Flight f1(7813, "20-12-2021", 84, "Porto", "Milano");
    Flight f2(9648, "26-12-2021", 80, "Milano", "Brussels");

    f1.insertPassenger(p1);
    f1.insertPassenger(p2);
    f1.insertPassenger(p3);
    f1.insertPassenger(p4);
    f1.insertPassenger(p5);
    f1.insertPassenger(p6);

    list<Flight> flightPlan;
    flightPlan.push_back(f1);
    flightPlan.push_back(f2);

    queue<Service> services;
    services.push(s2);
    services.push(s1);

    Plane pl1("B7031",123, flightPlan, services);

    EXPECT_EQ(0, pl1.numPassengers(f2.getFlightNumber()));
    EXPECT_EQ(6, pl1.numPassengers(f1.getFlightNumber()));
}