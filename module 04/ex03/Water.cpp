//
// Created by Lonmouth Mallador on 1/19/21.
//

#include "Water.hpp"

AMateria *Water::clone() const {
	return new Water;
}

Water::Water() : AMateria("water") {}

Water &Water::operator=(const Water &water) {
	if (this == &water) {
		return *this;
	}
	this->_xp = water.getXP();
	this->type = water.getType();
	return *this;
}

void Water::use(ICharacter &target) {
	std::cout << "* gigant WAVES are sent to " + target.getName() + " *" << std::endl;
	AMateria::use(target);
}

Water::~Water() {
}

Water::Water(const Water &water) : AMateria(water) {
}
