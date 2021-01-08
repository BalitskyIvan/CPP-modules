//
// Created by lmallado on 29.12.2020.
//

#include "Zombie.hpp"

Zombie::Zombie(const std::string &name) : name(name) {}

void Zombie::announce() {
    std::cout << type + " " + name + " Braiiiiiiinnnssss..." << std::endl;
}

void Zombie::setType(const std::string &type) {
    this->type = type;
}
