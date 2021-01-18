//
// Created by Lonmouth Mallador on 1/18/21.
//

#include "Victim.hpp"
Victim::Victim() {}

Victim::Victim(const std::string &name) : name(name) {
	std::cout << "Some random victim called " + getName() + " just appeared!" << std::endl;
}

Victim::Victim(const Victim &victim) {
	*this = victim;
	std::cout << "Some random victim called " + getName() + " just appeared!" << std::endl;
}

Victim &Victim::operator=(const Victim &victim) {
	std::cout << "Assignation operator called" << std::endl;
	if (this == &victim) {
		return *this;
	}
	this->name = victim.getName();
	return *this;
}

void Victim::getPolymorphed() const {
	std::cout << getName() + " has been turned into a cute little sheep!" << std::endl;
}

const std::string &Victim::getName() const {
	return name;
}

std::ostream &operator<<(std::ostream &os, const Victim &victim) {
	os << "I am " + victim.getName() + " and I like otters!" << std::endl;
	return os;
}

Victim::~Victim() {
	std::cout << "Victim " + getName() + " just died for no apparent reason!" << std::endl;
}
