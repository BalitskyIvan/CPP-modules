//
// Created by Lonmouth Mallador on 1/18/21.
//

#include "Sorcerer.hpp"

Sorcerer::Sorcerer() {}

Sorcerer::Sorcerer(const std::string &name, const std::string &title) : name(name), title(title) {
	std::cout << name + ", " + title + ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &sorcerer) {
	*this = sorcerer;
	std::cout << getName() + ", " + getTitle() + ", is born!" << std::endl;
}

Sorcerer &Sorcerer::operator=(const Sorcerer &sorcerer) {
	std::cout << "Assignation operator called" << std::endl;
	if (this == &sorcerer) {
		return *this;
	}
	this->name = sorcerer.getName();
	this->title = sorcerer.getTitle();
	return *this;
}

void Sorcerer::polymorph(const Victim &victim) const {
	victim.getPolymorphed();
}

const std::string &Sorcerer::getName() const {
	return name;
}
const std::string &Sorcerer::getTitle() const {
	return title;
}

std::ostream &operator<<(std::ostream &os, const Sorcerer &sorcerer) {
	os << "I am " + sorcerer.getName() + ", " + sorcerer.getTitle() + ", and I like ponies!" << std::endl;
	return os;
}

Sorcerer::~Sorcerer() {
	std::cout << name + ", " + title + ", is dead. Consequences will never be the same!" << std::endl;
}
