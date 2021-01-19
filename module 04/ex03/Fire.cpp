//
// Created by Lonmouth Mallador on 1/19/21.
//

#include "Fire.hpp"

AMateria *Fire::clone() const {
	return new Fire;
}

Fire::Fire() : AMateria("fire") {}

Fire::Fire(const Fire &fire) : AMateria(fire) {}

Fire &Fire::operator=(const Fire &fire) {
	if (this == &fire) {
		return *this;
	}
	this->_xp = fire.getXP();
	this->type = fire.getType();
	return *this;
}

void Fire::use(ICharacter &target) {
	std::cout << "* shoots with a FIRE BALLS " + target.getName() + " *" << std::endl;
	AMateria::use(target);
}

Fire::~Fire() {
}
