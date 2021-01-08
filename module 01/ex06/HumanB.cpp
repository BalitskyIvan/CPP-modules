//
// Created by lmallado on 29.12.2020.
//

#include "HumanB.hpp"

void HumanB::attack() {
    std::cout << name + " attacks with his " + weapon->getType() << std::endl;
}

HumanB::HumanB(const std::string &name) : name(name) {}

void HumanB::setWeapon(Weapon &weapon) {
    HumanB::weapon = &weapon;
}

