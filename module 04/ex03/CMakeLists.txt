cmake_minimum_required(VERSION 3.17)
project(ex03)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex03 main.cpp AMateria.cpp AMateria.hpp Ice.cpp Ice.hpp Cure.cpp Cure.hpp Character.cpp Character.hpp MateriaSource.cpp MateriaSource.hpp ICharacter.hpp IMateriaSource.hpp Fire.cpp Fire.hpp Water.cpp Water.hpp)