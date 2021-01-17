cmake_minimum_required(VERSION 3.17)
project(ex01)

set(CMAKE_CXX_STANDARD 14)

add_executable(ex01 main.cpp FragTrap.cpp FragTrap.hpp ScavTrap.cpp ScavTrap.hpp)