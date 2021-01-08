//
// Created by lmallado on 29.12.2020.
//

#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon) : name(name), weapon(&weapon) {}

void HumanA::attack() {
    std::cout << name + " attacks with his " + weapon->getType() << std::endl;
}
