//
// Created by Lonmouth Mallador on 1/18/21.
//

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant") {
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &superMutant) : Enemy(superMutant.getHP(), superMutant.getType()) {
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant &SuperMutant::operator=(const SuperMutant &superMutant) {
	if (this == &superMutant) {
		return *this;
	}
	this->type = superMutant.getType();
	this->hitPoints = superMutant.getHP();
	return *this;
}

SuperMutant::~SuperMutant() {
	std::cout << "Aaargh..." << std::endl;
}
void SuperMutant::takeDamage(int damage) {
	if (damage <= 0)
		return;
	this->hitPoints -= damage / 3;
	if (this->hitPoints < 0)
		this->hitPoints = 0;
}
