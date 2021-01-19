//
// Created by Lonmouth Mallador on 1/19/21.
//

#include "Cure.hpp"
AMateria *Cure::clone() const {
	return new Cure;
}

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure &cure) : AMateria(cure) {}

Cure &Cure::operator=(const Cure &cure) {
	if (this == &cure) {
		return *this;
	}
	this->_xp = cure.getXP();
	this->type = cure.getType();
	return *this;
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals " + target.getName() + "’s wounds *" << std::endl;
	AMateria::use(target);
}

Cure::~Cure() {
}