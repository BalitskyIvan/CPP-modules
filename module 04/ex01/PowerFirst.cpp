//
// Created by Lonmouth Mallador on 1/18/21.
//

#include "PowerFirst.hpp"

PowerFirst::PowerFirst() : AWeapon("Power Fist", 8, 50) {}

PowerFirst::~PowerFirst() {
}

void PowerFirst::attack() const {
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFirst::PowerFirst(const PowerFirst &powerFirst) : AWeapon(powerFirst.getName(), powerFirst.getAPCost(), powerFirst.getDamage()) {}
