cmake_minimum_required(VERSION 3.20)
project(AED_project)

set(CMAKE_CXX_STANDARD 14)
add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)

add_executable(AED_project main.cpp Tests/Plane.cpp Tests/Plane.h Tests/Passenger.cpp Tests/Passenger.h Tests/Luggage.cpp Tests/Luggage.h Tests/Service.cpp Tests/Service.h Tests/tests.cpp Tests/Employee.cpp Tests/Employee.h Tests/Ticket.cpp Tests/Ticket.h Tests/Boarding.cpp Tests/Boarding.h Tests/Trolley.cpp Tests/Trolley.h Tests/LocalTransport.cpp Tests/LocalTransport.h Tests/Airport.cpp Tests/Airport.h Tests/BST.h Tests/GroundTransportation.cpp Tests/GroundTransportation.h Tests/Flight.cpp Tests/Flight.h)

target_link_libraries(AED_project gtest gtest_main)