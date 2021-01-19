//
// Created by Lonmouth Mallador on 1/18/21.
//

#include "Character.hpp"

Character::Character(const std::string &name) : name(name), actionPoints(40), weapon(NULL) {
}

Character::Character(const Character &character) {
	*this = character;
}

Character &Character::operator=(const Character &character) {
	if (this == &character) {
		return *this;
	}
	this->name = character.getName();
	this->actionPoints = character.getActionPoints();
	return *this;
}

int Character::getActionPoints() const {
	return actionPoints;
}

void Character::recoverAP() {
	this->actionPoints += 10;
	if (this->actionPoints > maxAp)
		this->actionPoints = maxAp;
}

void Character::equip(AWeapon *aWeapon) {
	this->weapon = aWeapon;
}

void Character::attack(Enemy *enemy) {
	if (weapon != NULL && enemy->getHP() > 0) {
		if (this->actionPoints - weapon->getAPCost() >= 0) {
			std::cout << getName() + " attacks " + enemy->getType() + " with a " + weapon->getName() << std::endl;
			weapon->attack();
			enemy->takeDamage(weapon->getDamage());
			this->actionPoints -= weapon->getAPCost();
			if (enemy->getHP() <= 0)
				enemy->~Enemy();
		}
	}
}

std::string const &Character::getName() const {
	return this->name;
}

std::ostream &operator<<(std::ostream &os, const Character &character) {
	if (character.getWeapon() == NULL)
		os << character.getName() + " has " + std::to_string(character.getActionPoints()) + " AP and is unarmed" << std::endl;
	else
		os << character.getName() + " has " + std::to_string(character.getActionPoints()) + " AP and wields a " + character.getWeapon()->getName() << std::endl;
	return os;
}

Character::~Character() {
}

AWeapon *Character::getWeapon() const {
	return weapon;
}
