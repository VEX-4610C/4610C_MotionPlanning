cmake_minimum_required(VERSION 3.10)
project(CustomSplines)

set(CMAKE_CXX_STANDARD 17)

add_executable(CustomSplines main.cpp xStructures/Path.cpp xStructures/Path.h xStructures/Trajectory.cpp xStructures/Trajectory.h xStructures/WaypointSequence.cpp xStructures/WaypointSequence.h xCalculations/PathGenerator.cpp xCalculations/PathGenerator.h xCalculations/TrajectoryGenerator.cpp xCalculations/TrajectoryGenerator.h xStructures/Spline.cpp xStructures/Spline.h)