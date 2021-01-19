//
// Created by Lonmouth Mallador on 1/19/21.
//

#include "Character.hpp"

Character::Character() {}


Character::Character(const Character &character) {
	*this = character;
}

Character &Character::operator=(const Character &character) {
	if (this == &character) {
		return *this;
	}
	this->name = character.getName();
	for (int i = 0; i < maxInvent; i++)
		delete invent[i];
	for (int i = 0; i < maxInvent; i++)
		invent[i] = character.getInvent(i)->clone();
	return *this;
}

Character::Character(const std::string &name) : name(name) {
	for (int i = 0; i < maxInvent; i++)
		invent[i] = NULL;
}

const std::string &Character::getName() const {
	return name;
}

void Character::equip(AMateria *m) {
	if (m == NULL)
		return;
	for (int i = 0; i < maxInvent; i++)
		if (invent[i] == NULL) {
			invent[i] = m->clone();
			break;
		}
}

void Character::unequip(int idx) {
	if (idx < maxInvent && idx >= 0)
		invent[idx] = NULL;
}

void Character::use(int idx, ICharacter &target) {
	if (idx < maxInvent && idx >= 0 && invent[idx])
		invent[idx]->use(target);
}

AMateria *Character::getInvent(int i) const {
	return invent[i];
}

Character::~Character() {
	for (int i = 0; i < maxInvent; i++)
		delete invent[i];
}