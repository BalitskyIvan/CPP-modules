//
// Created by Lonmouth Mallador on 1/18/21.
//

#include "Peon.hpp"

Peon::Peon(const std::string &name) : Victim(name) {
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Victim &victim) : Victim(victim) {
	std::cout << "Zog zog." << std::endl;
}

void Peon::getPolymorphed() const {
	std::cout << getName() + " has been turned into a pink pony!" << std::endl;
}

Peon::~Peon() {
	std::cout << "Bleuark..." << std::endl;
}
