cmake_minimum_required(VERSION 3.17)
project(ex03)

set(CMAKE_CXX_STANDARD 98)

add_executable(ex03 main.cpp Intern.cpp Intern.hpp Bureaucrat.cpp Bureaucrat.hpp Form.cpp Form.hpp
        PresidentialPardonForm.cpp PresidentialPardonForm.hpp RobotomyRequestForm.cpp RobotomyRequestForm.cpp
        ShrubberyCreationForm.cpp ShrubberyCreationForm.hpp)