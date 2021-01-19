//
// Created by Lonmouth Mallador on 1/18/21.
//

#include "AWeapon.hpp"

int AWeapon::getAPCost() const {
	return apcost;
}
int AWeapon::getDamage() const {
	return damage;
}

AWeapon::AWeapon(const std::string &name, int apcost, int damage) : apcost(apcost), damage(damage), name(name) {
}
AWeapon::~AWeapon() {
}

AWeapon::AWeapon() {}

AWeapon &AWeapon::operator=(const AWeapon &aWeapon) {
	if (this == &aWeapon) {
		return *this;
	}
	this->name = aWeapon.getName();
	this->damage = aWeapon.getDamage();
	this->apcost = aWeapon.getAPCost();
	return *this;
}

AWeapon::AWeapon(AWeapon &aWeapon) {
	*this = aWeapon;
}
std::string const &AWeapon::getName() const {
	return this->name;
}
