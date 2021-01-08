//
// Created by lmallado on 29.12.2020.
//

#include "Weapon.hpp"

const std::string &Weapon::getType() const {
    return type;
}

void Weapon::setType(std::string type) {
    this->type = type;
}

Weapon::Weapon(std::string type) : type(type) {}
