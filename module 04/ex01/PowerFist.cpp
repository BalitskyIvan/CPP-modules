//
// Created by Lonmouth Mallador on 1/18/21.
//

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50) {}

PowerFist::~PowerFist() {
}

void PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
PowerFist &PowerFist::operator= (const PowerFist &weapon) {
    if (this == &weapon) {
        return *this;
    }
    this->name = weapon.getName();
    this->apcost = weapon.getAPCost();
    this->damage = weapon.getDamage();
    return *this;
}
PowerFist::PowerFist(const PowerFist &powerFirst) : AWeapon(powerFirst.getName(), powerFirst.getAPCost(), powerFirst.getDamage()) {}
