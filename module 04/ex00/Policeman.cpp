//
// Created by Lonmouth Mallador on 1/18/21.
//

#include "Policeman.hpp"

Policeman::Policeman(const std::string &name) : Victim(name) {
	std::cout << "SHOW ME YOUR HANDS NOW!" << std::endl;
}

Policeman::Policeman(const Victim &victim) : Victim(victim) {
	std::cout << "SHOW ME YOUR HANDS NOW!" << std::endl;
}

Policeman &Policeman::operator=(const Policeman &policeman) {
	if (this == &policeman) {
		return *this;
	}
	this->name = policeman.getName();
	return *this;
}

void Policeman::getPolymorphed() const {
	std::cout << getName() + " has been turned into a cute pig!" << std::endl;
}

Policeman::~Policeman() {
	std::cout << "Ah.. SHIT" << std::endl;
}
