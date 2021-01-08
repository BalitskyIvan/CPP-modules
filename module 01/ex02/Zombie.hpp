//
// Created by lmallado on 29.12.2020.
//

#ifndef EX02_ZOMBIE_HPP
#define EX02_ZOMBIE_HPP

#include <iostream>
#include <stdlib.h>

class Zombie {
private:
    std::string type;
    std::string name;
public:
    Zombie(const std::string &name);

    void setType(const std::string &type);

    void announce();
};


#endif //EX02_ZOMBIE_HPP
