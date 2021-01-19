cmake_minimum_required(VERSION 3.17)
project(ex01)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex01 main.cpp AWeapon.cpp AWeapon.hpp PlasmaRifle.cpp PlasmaRifle.hpp PowerFist.cpp PowerFist.hpp Enemy.cpp Enemy.hpp SuperMutant.cpp SuperMutant.hpp RadScorpion.cpp RadScorpion.hpp Character.cpp Character.hpp Ak_47.cpp Ak_47.hpp GrenadeLauncher.cpp GrenadeLauncher.hpp Godzilla.cpp Godzilla.hpp Beggar.cpp Beggar.hpp)