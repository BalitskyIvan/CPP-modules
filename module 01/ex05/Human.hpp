//
// Created by lmallado on 29.12.2020.
//

#ifndef EX05_HUMAN_HPP
#define EX05_HUMAN_HPP

#include "Brain.hpp"

class Human {
private:
    Brain brain;
public:
    Human();

    std::string identify();
    const Brain &getBrain();

};


#endif //EX05_HUMAN_HPP
