//
// Created by Lonmouth Mallador on 1/18/21.
//

#include "GrenadeLauncher.hpp"

GrenadeLauncher::GrenadeLauncher() : AWeapon("GRENADE LAUNCHER", 7, 90) {}

GrenadeLauncher::~GrenadeLauncher() {
}
void GrenadeLauncher::attack() const {
	std::cout << "* shww...                  BOOOOOOOOOOOOOOOOOOOM!!! *" << std::endl;
}

GrenadeLauncher &GrenadeLauncher::operator=(const GrenadeLauncher &weapon) {
	if (this == &weapon) {
		return *this;
	}
	this->name = weapon.getName();
	this->apcost = weapon.getAPCost();
	this->damage = weapon.getDamage();
	return *this;
}

GrenadeLauncher::GrenadeLauncher(const GrenadeLauncher &ak47) : AWeapon(ak47.getName(), ak47.getAPCost(), ak47.getDamage()) {}
