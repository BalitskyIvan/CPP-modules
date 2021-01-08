//
// Created by lmallado on 29.12.2020.
//

#ifndef EX05_BRAIN_HPP
#define EX05_BRAIN_HPP

#include <iostream>
#include <sstream>

class Brain {
private:
    int iq;
    std::string owner;
public:
    Brain();
    std::string identify() const;
};


#endif //EX05_BRAIN_HPP
