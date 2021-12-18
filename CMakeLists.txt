cmake_minimum_required(VERSION 3.20)
project(AED_project)

set(CMAKE_CXX_STANDARD 14)
add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)

add_executable(AED_project main.cpp Tests/Plane.cpp Tests/Plane.h Tests/Passenger.cpp Tests/Passenger.h Tests/Luggage.cpp Tests/Luggage.h Tests/Service.cpp Tests/Service.h Tests/tests.cpp Tests/Employee.cpp Tests/Employee.h Tests/Ticket.cpp Tests/Ticket.h Tests/Boarding.cpp Tests/Boarding.h Tests/Trolley.cpp Tests/Trolley.h Tests/LocalTransport.cpp Tests/LocalTransport.h Tests/Airport.cpp Tests/Airport.h Tests/BST.h Tests/GroundTransportation.cpp Tests/GroundTransportation.h Tests/Flight.cpp Tests/Flight.h Tests/Menu.cpp Tests/Menu.h)

target_link_libraries(AED_project gtest gtest_main)

# Doxygen Build
find_package(Doxygen)
if(DOXYGEN_FOUND)
    set(BUILD_DOC_DIR "${CMAKE_SOURCE_DIR}/docs/output")
    if(NOT EXISTS "${BUILD_DOC_DIR}")
        file(MAKE_DIRECTORY "${BUILD_DOC_DIR}")
    endif()

    set(DOXYGEN_IN "${CMAKE_CURRENT_SOURCE_DIR}/docs/Doxyfile")
    set(DOXYGEN_OUT "${CMAKE_CURRENT_BINARY_DIR}/Doxyfile")
    configure_file("${DOXYGEN_IN}" "${DOXYGEN_OUT}" @ONLY)

    message("Doxygen build started")
    add_custom_target(Doxygen ALL
            COMMAND "${DOXYGEN_EXECUTABLE}" "${DOXYGEN_OUT}"
            WORKING_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}"
            COMMENT "Generating API documentation with Doxygen"
            VERBATIM)
else(DOXYGEN_FOUND)
    message("Doxygen needs to be installed to generate the documentation.")
endif(DOXYGEN_FOUND)