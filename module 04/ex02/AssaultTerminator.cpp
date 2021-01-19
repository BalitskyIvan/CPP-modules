//
// Created by Lonmouth Mallador on 1/19/21.
//

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() {
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(const AssaultTerminator &assaultTerminator) {
	*this = assaultTerminator;
}

AssaultTerminator &AssaultTerminator::operator=(const AssaultTerminator &assaultTerminator) {
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}

void AssaultTerminator::battleCry() const {
	std::cout <<  "This code is unclean. PURIFY IT!" << std::endl;
}
void AssaultTerminator::rangedAttack() const {
	std::cout << "* does nothing *" << std::endl;
}
void AssaultTerminator::meleeAttack() const {
	std::cout << "* attacks with chainfists *" << std::endl;
}

ISpaceMarine *AssaultTerminator::clone() const {
	return new AssaultTerminator();
}

AssaultTerminator::~AssaultTerminator() {
	std::cout << "I’ll be back..." << std::endl;
}
