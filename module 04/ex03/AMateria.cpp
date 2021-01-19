//
// Created by Lonmouth Mallador on 1/19/21.
//

#include "AMateria.hpp"
AMateria::AMateria(const std::string &type) : _xp(0), type(type) {
}

std::string const &AMateria::getType() const {
	return type;
}

AMateria &AMateria::operator=(const AMateria &aMateria) {
	if (this == &aMateria) {
		return *this;
	}
	this->_xp = aMateria.getXP();
	this->type = aMateria.getType();
	return *this;
}

unsigned int AMateria::getXP() const {
	return _xp;
}
void AMateria::use(ICharacter &target) {
	(void) target;
	_xp += 10;
}

AMateria::~AMateria() {

}
AMateria::AMateria() {}
AMateria::AMateria(const AMateria &aMateria) {
	*this = aMateria;
}
