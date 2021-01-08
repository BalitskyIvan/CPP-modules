//
// Created by lmallado on 29.12.2020.
//

#include "Human.hpp"

std::string Human::identify() {
    return brain.identify();
}

const Brain &Human::getBrain() {
    return brain;
}

Human::Human() {}



