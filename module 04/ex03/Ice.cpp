//
// Created by Lonmouth Mallador on 1/19/21.
//

#include "Ice.hpp"
AMateria *Ice::clone() const {
	return new Ice;
}

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice &ice) : AMateria(ice) {}

Ice &Ice::operator=(const Ice &ice) {
	if (this == &ice) {
		return *this;
	}
	this->_xp = ice.getXP();
	this->type = ice.getType();
	return *this;
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " + target.getName() + " *" << std::endl;
	AMateria::use(target);
}

Ice::~Ice() {
}
