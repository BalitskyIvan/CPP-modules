//
// Created by Lonmouth Mallador on 1/18/21.
//

#include "Ak_47.hpp"

Ak_47::Ak_47() : AWeapon("AK-47", 7, 35) {}

Ak_47::~Ak_47() {
}

void Ak_47::attack() const {
	std::cout << "* RATATATATATATATATATATATATATATATATATATATATA *" << std::endl;
}

Ak_47::Ak_47(const Ak_47 &ak47) : AWeapon(ak47.getName(), ak47.getAPCost(), ak47.getDamage()) {}
