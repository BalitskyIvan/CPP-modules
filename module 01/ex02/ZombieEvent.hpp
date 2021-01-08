//
// Created by lmallado on 29.12.2020.
//

#ifndef EX02_ZOMBIEEVENT_HPP
#define EX02_ZOMBIEEVENT_HPP

#include "Zombie.hpp"
#define TYPES_NUM 10
#define MAX_RANDOM_ZOMBIES 20

class ZombieEvent {
public:
    void setZombieType(Zombie *zombie, std::string type);
    Zombie *newZombie(std::string name);
    void randomChump();
};


#endif //EX02_ZOMBIEEVENT_HPP
