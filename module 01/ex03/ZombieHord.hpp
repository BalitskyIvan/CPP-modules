//
// Created by lmallado on 29.12.2020.
//

#ifndef EX03_ZOMBIEHORD_HPP
#define EX03_ZOMBIEHORD_HPP

#include "Zombie.hpp"

class ZombieHord {
private:
    int N;
    Zombie **zombieHord;
public:
    ZombieHord(int n);

    virtual ~ZombieHord();

    void announce();
};


#endif //EX03_ZOMBIEHORD_HPP
