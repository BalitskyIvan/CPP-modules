//
// Created by lmallado on 29.12.2020.
//

#include "Brain.hpp"

Brain::Brain() : iq(10), owner("Nick") { iq = 10; }

std::string Brain::identify() const {
    const void *ptr = static_cast<const void*>(this);
    std::stringstream string_ptr;
    string_ptr << ptr;
    return string_ptr.str();
}

