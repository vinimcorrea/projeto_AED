# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/viniciuscorrea/Desktop/aedProject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/viniciuscorrea/Desktop/aedProject/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/AED_project.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/AED_project.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/AED_project.dir/flags.make

CMakeFiles/AED_project.dir/main.cpp.o: CMakeFiles/AED_project.dir/flags.make
CMakeFiles/AED_project.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/viniciuscorrea/Desktop/aedProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/AED_project.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AED_project.dir/main.cpp.o -c /Users/viniciuscorrea/Desktop/aedProject/main.cpp

CMakeFiles/AED_project.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AED_project.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/viniciuscorrea/Desktop/aedProject/main.cpp > CMakeFiles/AED_project.dir/main.cpp.i

CMakeFiles/AED_project.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AED_project.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/viniciuscorrea/Desktop/aedProject/main.cpp -o CMakeFiles/AED_project.dir/main.cpp.s

CMakeFiles/AED_project.dir/Tests/Plane.cpp.o: CMakeFiles/AED_project.dir/flags.make
CMakeFiles/AED_project.dir/Tests/Plane.cpp.o: ../Tests/Plane.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/viniciuscorrea/Desktop/aedProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/AED_project.dir/Tests/Plane.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AED_project.dir/Tests/Plane.cpp.o -c /Users/viniciuscorrea/Desktop/aedProject/Tests/Plane.cpp

CMakeFiles/AED_project.dir/Tests/Plane.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AED_project.dir/Tests/Plane.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/viniciuscorrea/Desktop/aedProject/Tests/Plane.cpp > CMakeFiles/AED_project.dir/Tests/Plane.cpp.i

CMakeFiles/AED_project.dir/Tests/Plane.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AED_project.dir/Tests/Plane.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/viniciuscorrea/Desktop/aedProject/Tests/Plane.cpp -o CMakeFiles/AED_project.dir/Tests/Plane.cpp.s

CMakeFiles/AED_project.dir/Tests/Passenger.cpp.o: CMakeFiles/AED_project.dir/flags.make
CMakeFiles/AED_project.dir/Tests/Passenger.cpp.o: ../Tests/Passenger.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/viniciuscorrea/Desktop/aedProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/AED_project.dir/Tests/Passenger.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AED_project.dir/Tests/Passenger.cpp.o -c /Users/viniciuscorrea/Desktop/aedProject/Tests/Passenger.cpp

CMakeFiles/AED_project.dir/Tests/Passenger.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AED_project.dir/Tests/Passenger.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/viniciuscorrea/Desktop/aedProject/Tests/Passenger.cpp > CMakeFiles/AED_project.dir/Tests/Passenger.cpp.i

CMakeFiles/AED_project.dir/Tests/Passenger.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AED_project.dir/Tests/Passenger.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/viniciuscorrea/Desktop/aedProject/Tests/Passenger.cpp -o CMakeFiles/AED_project.dir/Tests/Passenger.cpp.s

CMakeFiles/AED_project.dir/Tests/Luggage.cpp.o: CMakeFiles/AED_project.dir/flags.make
CMakeFiles/AED_project.dir/Tests/Luggage.cpp.o: ../Tests/Luggage.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/viniciuscorrea/Desktop/aedProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/AED_project.dir/Tests/Luggage.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AED_project.dir/Tests/Luggage.cpp.o -c /Users/viniciuscorrea/Desktop/aedProject/Tests/Luggage.cpp

CMakeFiles/AED_project.dir/Tests/Luggage.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AED_project.dir/Tests/Luggage.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/viniciuscorrea/Desktop/aedProject/Tests/Luggage.cpp > CMakeFiles/AED_project.dir/Tests/Luggage.cpp.i

CMakeFiles/AED_project.dir/Tests/Luggage.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AED_project.dir/Tests/Luggage.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/viniciuscorrea/Desktop/aedProject/Tests/Luggage.cpp -o CMakeFiles/AED_project.dir/Tests/Luggage.cpp.s

CMakeFiles/AED_project.dir/Tests/Service.cpp.o: CMakeFiles/AED_project.dir/flags.make
CMakeFiles/AED_project.dir/Tests/Service.cpp.o: ../Tests/Service.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/viniciuscorrea/Desktop/aedProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/AED_project.dir/Tests/Service.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AED_project.dir/Tests/Service.cpp.o -c /Users/viniciuscorrea/Desktop/aedProject/Tests/Service.cpp

CMakeFiles/AED_project.dir/Tests/Service.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AED_project.dir/Tests/Service.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/viniciuscorrea/Desktop/aedProject/Tests/Service.cpp > CMakeFiles/AED_project.dir/Tests/Service.cpp.i

CMakeFiles/AED_project.dir/Tests/Service.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AED_project.dir/Tests/Service.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/viniciuscorrea/Desktop/aedProject/Tests/Service.cpp -o CMakeFiles/AED_project.dir/Tests/Service.cpp.s

CMakeFiles/AED_project.dir/Tests/tests.cpp.o: CMakeFiles/AED_project.dir/flags.make
CMakeFiles/AED_project.dir/Tests/tests.cpp.o: ../Tests/tests.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/viniciuscorrea/Desktop/aedProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/AED_project.dir/Tests/tests.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AED_project.dir/Tests/tests.cpp.o -c /Users/viniciuscorrea/Desktop/aedProject/Tests/tests.cpp

CMakeFiles/AED_project.dir/Tests/tests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AED_project.dir/Tests/tests.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/viniciuscorrea/Desktop/aedProject/Tests/tests.cpp > CMakeFiles/AED_project.dir/Tests/tests.cpp.i

CMakeFiles/AED_project.dir/Tests/tests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AED_project.dir/Tests/tests.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/viniciuscorrea/Desktop/aedProject/Tests/tests.cpp -o CMakeFiles/AED_project.dir/Tests/tests.cpp.s

CMakeFiles/AED_project.dir/Tests/Employee.cpp.o: CMakeFiles/AED_project.dir/flags.make
CMakeFiles/AED_project.dir/Tests/Employee.cpp.o: ../Tests/Employee.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/viniciuscorrea/Desktop/aedProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/AED_project.dir/Tests/Employee.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AED_project.dir/Tests/Employee.cpp.o -c /Users/viniciuscorrea/Desktop/aedProject/Tests/Employee.cpp

CMakeFiles/AED_project.dir/Tests/Employee.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AED_project.dir/Tests/Employee.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/viniciuscorrea/Desktop/aedProject/Tests/Employee.cpp > CMakeFiles/AED_project.dir/Tests/Employee.cpp.i

CMakeFiles/AED_project.dir/Tests/Employee.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AED_project.dir/Tests/Employee.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/viniciuscorrea/Desktop/aedProject/Tests/Employee.cpp -o CMakeFiles/AED_project.dir/Tests/Employee.cpp.s

CMakeFiles/AED_project.dir/Tests/Ticket.cpp.o: CMakeFiles/AED_project.dir/flags.make
CMakeFiles/AED_project.dir/Tests/Ticket.cpp.o: ../Tests/Ticket.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/viniciuscorrea/Desktop/aedProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/AED_project.dir/Tests/Ticket.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AED_project.dir/Tests/Ticket.cpp.o -c /Users/viniciuscorrea/Desktop/aedProject/Tests/Ticket.cpp

CMakeFiles/AED_project.dir/Tests/Ticket.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AED_project.dir/Tests/Ticket.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/viniciuscorrea/Desktop/aedProject/Tests/Ticket.cpp > CMakeFiles/AED_project.dir/Tests/Ticket.cpp.i

CMakeFiles/AED_project.dir/Tests/Ticket.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AED_project.dir/Tests/Ticket.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/viniciuscorrea/Desktop/aedProject/Tests/Ticket.cpp -o CMakeFiles/AED_project.dir/Tests/Ticket.cpp.s

CMakeFiles/AED_project.dir/Tests/Boarding.cpp.o: CMakeFiles/AED_project.dir/flags.make
CMakeFiles/AED_project.dir/Tests/Boarding.cpp.o: ../Tests/Boarding.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/viniciuscorrea/Desktop/aedProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/AED_project.dir/Tests/Boarding.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AED_project.dir/Tests/Boarding.cpp.o -c /Users/viniciuscorrea/Desktop/aedProject/Tests/Boarding.cpp

CMakeFiles/AED_project.dir/Tests/Boarding.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AED_project.dir/Tests/Boarding.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/viniciuscorrea/Desktop/aedProject/Tests/Boarding.cpp > CMakeFiles/AED_project.dir/Tests/Boarding.cpp.i

CMakeFiles/AED_project.dir/Tests/Boarding.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AED_project.dir/Tests/Boarding.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/viniciuscorrea/Desktop/aedProject/Tests/Boarding.cpp -o CMakeFiles/AED_project.dir/Tests/Boarding.cpp.s

CMakeFiles/AED_project.dir/Tests/Trolley.cpp.o: CMakeFiles/AED_project.dir/flags.make
CMakeFiles/AED_project.dir/Tests/Trolley.cpp.o: ../Tests/Trolley.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/viniciuscorrea/Desktop/aedProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/AED_project.dir/Tests/Trolley.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AED_project.dir/Tests/Trolley.cpp.o -c /Users/viniciuscorrea/Desktop/aedProject/Tests/Trolley.cpp

CMakeFiles/AED_project.dir/Tests/Trolley.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AED_project.dir/Tests/Trolley.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/viniciuscorrea/Desktop/aedProject/Tests/Trolley.cpp > CMakeFiles/AED_project.dir/Tests/Trolley.cpp.i

CMakeFiles/AED_project.dir/Tests/Trolley.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AED_project.dir/Tests/Trolley.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/viniciuscorrea/Desktop/aedProject/Tests/Trolley.cpp -o CMakeFiles/AED_project.dir/Tests/Trolley.cpp.s

CMakeFiles/AED_project.dir/Tests/LocalTransport.cpp.o: CMakeFiles/AED_project.dir/flags.make
CMakeFiles/AED_project.dir/Tests/LocalTransport.cpp.o: ../Tests/LocalTransport.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/viniciuscorrea/Desktop/aedProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/AED_project.dir/Tests/LocalTransport.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AED_project.dir/Tests/LocalTransport.cpp.o -c /Users/viniciuscorrea/Desktop/aedProject/Tests/LocalTransport.cpp

CMakeFiles/AED_project.dir/Tests/LocalTransport.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AED_project.dir/Tests/LocalTransport.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/viniciuscorrea/Desktop/aedProject/Tests/LocalTransport.cpp > CMakeFiles/AED_project.dir/Tests/LocalTransport.cpp.i

CMakeFiles/AED_project.dir/Tests/LocalTransport.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AED_project.dir/Tests/LocalTransport.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/viniciuscorrea/Desktop/aedProject/Tests/LocalTransport.cpp -o CMakeFiles/AED_project.dir/Tests/LocalTransport.cpp.s

CMakeFiles/AED_project.dir/Tests/Airport.cpp.o: CMakeFiles/AED_project.dir/flags.make
CMakeFiles/AED_project.dir/Tests/Airport.cpp.o: ../Tests/Airport.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/viniciuscorrea/Desktop/aedProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/AED_project.dir/Tests/Airport.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AED_project.dir/Tests/Airport.cpp.o -c /Users/viniciuscorrea/Desktop/aedProject/Tests/Airport.cpp

CMakeFiles/AED_project.dir/Tests/Airport.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AED_project.dir/Tests/Airport.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/viniciuscorrea/Desktop/aedProject/Tests/Airport.cpp > CMakeFiles/AED_project.dir/Tests/Airport.cpp.i

CMakeFiles/AED_project.dir/Tests/Airport.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AED_project.dir/Tests/Airport.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/viniciuscorrea/Desktop/aedProject/Tests/Airport.cpp -o CMakeFiles/AED_project.dir/Tests/Airport.cpp.s

CMakeFiles/AED_project.dir/Tests/GroundTransportation.cpp.o: CMakeFiles/AED_project.dir/flags.make
CMakeFiles/AED_project.dir/Tests/GroundTransportation.cpp.o: ../Tests/GroundTransportation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/viniciuscorrea/Desktop/aedProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/AED_project.dir/Tests/GroundTransportation.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AED_project.dir/Tests/GroundTransportation.cpp.o -c /Users/viniciuscorrea/Desktop/aedProject/Tests/GroundTransportation.cpp

CMakeFiles/AED_project.dir/Tests/GroundTransportation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AED_project.dir/Tests/GroundTransportation.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/viniciuscorrea/Desktop/aedProject/Tests/GroundTransportation.cpp > CMakeFiles/AED_project.dir/Tests/GroundTransportation.cpp.i

CMakeFiles/AED_project.dir/Tests/GroundTransportation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AED_project.dir/Tests/GroundTransportation.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/viniciuscorrea/Desktop/aedProject/Tests/GroundTransportation.cpp -o CMakeFiles/AED_project.dir/Tests/GroundTransportation.cpp.s

CMakeFiles/AED_project.dir/Tests/Flight.cpp.o: CMakeFiles/AED_project.dir/flags.make
CMakeFiles/AED_project.dir/Tests/Flight.cpp.o: ../Tests/Flight.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/viniciuscorrea/Desktop/aedProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/AED_project.dir/Tests/Flight.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AED_project.dir/Tests/Flight.cpp.o -c /Users/viniciuscorrea/Desktop/aedProject/Tests/Flight.cpp

CMakeFiles/AED_project.dir/Tests/Flight.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AED_project.dir/Tests/Flight.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/viniciuscorrea/Desktop/aedProject/Tests/Flight.cpp > CMakeFiles/AED_project.dir/Tests/Flight.cpp.i

CMakeFiles/AED_project.dir/Tests/Flight.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AED_project.dir/Tests/Flight.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/viniciuscorrea/Desktop/aedProject/Tests/Flight.cpp -o CMakeFiles/AED_project.dir/Tests/Flight.cpp.s

CMakeFiles/AED_project.dir/Tests/Menu.cpp.o: CMakeFiles/AED_project.dir/flags.make
CMakeFiles/AED_project.dir/Tests/Menu.cpp.o: ../Tests/Menu.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/viniciuscorrea/Desktop/aedProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/AED_project.dir/Tests/Menu.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AED_project.dir/Tests/Menu.cpp.o -c /Users/viniciuscorrea/Desktop/aedProject/Tests/Menu.cpp

CMakeFiles/AED_project.dir/Tests/Menu.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AED_project.dir/Tests/Menu.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/viniciuscorrea/Desktop/aedProject/Tests/Menu.cpp > CMakeFiles/AED_project.dir/Tests/Menu.cpp.i

CMakeFiles/AED_project.dir/Tests/Menu.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AED_project.dir/Tests/Menu.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/viniciuscorrea/Desktop/aedProject/Tests/Menu.cpp -o CMakeFiles/AED_project.dir/Tests/Menu.cpp.s

CMakeFiles/AED_project.dir/Tests/Database.cpp.o: CMakeFiles/AED_project.dir/flags.make
CMakeFiles/AED_project.dir/Tests/Database.cpp.o: ../Tests/Database.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/viniciuscorrea/Desktop/aedProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building CXX object CMakeFiles/AED_project.dir/Tests/Database.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/AED_project.dir/Tests/Database.cpp.o -c /Users/viniciuscorrea/Desktop/aedProject/Tests/Database.cpp

CMakeFiles/AED_project.dir/Tests/Database.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/AED_project.dir/Tests/Database.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/viniciuscorrea/Desktop/aedProject/Tests/Database.cpp > CMakeFiles/AED_project.dir/Tests/Database.cpp.i

CMakeFiles/AED_project.dir/Tests/Database.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/AED_project.dir/Tests/Database.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/viniciuscorrea/Desktop/aedProject/Tests/Database.cpp -o CMakeFiles/AED_project.dir/Tests/Database.cpp.s

# Object files for target AED_project
AED_project_OBJECTS = \
"CMakeFiles/AED_project.dir/main.cpp.o" \
"CMakeFiles/AED_project.dir/Tests/Plane.cpp.o" \
"CMakeFiles/AED_project.dir/Tests/Passenger.cpp.o" \
"CMakeFiles/AED_project.dir/Tests/Luggage.cpp.o" \
"CMakeFiles/AED_project.dir/Tests/Service.cpp.o" \
"CMakeFiles/AED_project.dir/Tests/tests.cpp.o" \
"CMakeFiles/AED_project.dir/Tests/Employee.cpp.o" \
"CMakeFiles/AED_project.dir/Tests/Ticket.cpp.o" \
"CMakeFiles/AED_project.dir/Tests/Boarding.cpp.o" \
"CMakeFiles/AED_project.dir/Tests/Trolley.cpp.o" \
"CMakeFiles/AED_project.dir/Tests/LocalTransport.cpp.o" \
"CMakeFiles/AED_project.dir/Tests/Airport.cpp.o" \
"CMakeFiles/AED_project.dir/Tests/GroundTransportation.cpp.o" \
"CMakeFiles/AED_project.dir/Tests/Flight.cpp.o" \
"CMakeFiles/AED_project.dir/Tests/Menu.cpp.o" \
"CMakeFiles/AED_project.dir/Tests/Database.cpp.o"

# External object files for target AED_project
AED_project_EXTERNAL_OBJECTS =

AED_project: CMakeFiles/AED_project.dir/main.cpp.o
AED_project: CMakeFiles/AED_project.dir/Tests/Plane.cpp.o
AED_project: CMakeFiles/AED_project.dir/Tests/Passenger.cpp.o
AED_project: CMakeFiles/AED_project.dir/Tests/Luggage.cpp.o
AED_project: CMakeFiles/AED_project.dir/Tests/Service.cpp.o
AED_project: CMakeFiles/AED_project.dir/Tests/tests.cpp.o
AED_project: CMakeFiles/AED_project.dir/Tests/Employee.cpp.o
AED_project: CMakeFiles/AED_project.dir/Tests/Ticket.cpp.o
AED_project: CMakeFiles/AED_project.dir/Tests/Boarding.cpp.o
AED_project: CMakeFiles/AED_project.dir/Tests/Trolley.cpp.o
AED_project: CMakeFiles/AED_project.dir/Tests/LocalTransport.cpp.o
AED_project: CMakeFiles/AED_project.dir/Tests/Airport.cpp.o
AED_project: CMakeFiles/AED_project.dir/Tests/GroundTransportation.cpp.o
AED_project: CMakeFiles/AED_project.dir/Tests/Flight.cpp.o
AED_project: CMakeFiles/AED_project.dir/Tests/Menu.cpp.o
AED_project: CMakeFiles/AED_project.dir/Tests/Database.cpp.o
AED_project: CMakeFiles/AED_project.dir/build.make
AED_project: lib/libgtestd.a
AED_project: lib/libgtest_maind.a
AED_project: lib/libgtestd.a
AED_project: CMakeFiles/AED_project.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/viniciuscorrea/Desktop/aedProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Linking CXX executable AED_project"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/AED_project.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/AED_project.dir/build: AED_project
.PHONY : CMakeFiles/AED_project.dir/build

CMakeFiles/AED_project.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/AED_project.dir/cmake_clean.cmake
.PHONY : CMakeFiles/AED_project.dir/clean

CMakeFiles/AED_project.dir/depend:
	cd /Users/viniciuscorrea/Desktop/aedProject/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/viniciuscorrea/Desktop/aedProject /Users/viniciuscorrea/Desktop/aedProject /Users/viniciuscorrea/Desktop/aedProject/cmake-build-debug /Users/viniciuscorrea/Desktop/aedProject/cmake-build-debug /Users/viniciuscorrea/Desktop/aedProject/cmake-build-debug/CMakeFiles/AED_project.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/AED_project.dir/depend

