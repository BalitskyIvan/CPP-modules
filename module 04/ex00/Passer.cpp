//
// Created by Lonmouth Mallador on 1/18/21.
//

#include "Passer.hpp"

Passer::Passer(const std::string &name) : Victim(name) {
	std::cout << "Tutururtu... tururu" << std::endl;
}

Passer::Passer(const Victim &victim) : Victim(victim) {
	std::cout << "Tutururtu... tururu" << std::endl;
}

void Passer::getPolymorphed() const {
	std::cout << getName() + " has been turned into a cute otter!" << std::endl;
}

Passer::~Passer() {
	std::cout << "NOOOooooooo..." << std::endl;
}
