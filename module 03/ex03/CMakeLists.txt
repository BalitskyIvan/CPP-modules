cmake_minimum_required(VERSION 3.17)
project(ex03)

set(CMAKE_CXX_STANDARD 14)

add_executable(ex03 main.cpp ClapTrap.cpp ClapTrap.hpp FragTrap.cpp FragTrap.hpp ScavTrap.hpp ScavTrap.cpp NinjaTrap.cpp NinjaTrap.hpp)