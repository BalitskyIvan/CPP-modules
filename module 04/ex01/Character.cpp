//
// Created by Lonmouth Mallador on 1/18/21.
//

#include "Character.hpp"

Character::Character(const std::string &name) : name(name) {
}
void Character::recoverAP() {
}

void Character::equip(AWeapon *aWeapon) {
}

void Character::attack(Enemy *enemy) {
	
}

std::string const &Character::getName() const {
	return this->name;
}

Character::~Character() {
}