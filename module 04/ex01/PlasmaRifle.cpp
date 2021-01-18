//
// Created by Lonmouth Mallador on 1/18/21.
//

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21) {}

PlasmaRifle::~PlasmaRifle() {
}
void PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &plasmaRifle) : AWeapon(plasmaRifle.getName(), plasmaRifle.getAPCost(), plasmaRifle.getDamage()) {}
