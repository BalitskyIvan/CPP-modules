cmake_minimum_required(VERSION 3.17)
project(ex02)

set(CMAKE_CXX_STANDARD 14)

add_executable(ex02 main.cpp FragTrap.hpp FragTrap.cpp ScavTrap.cpp ScavTrap.hpp ClapTrap.cpp ClapTrap.hpp)