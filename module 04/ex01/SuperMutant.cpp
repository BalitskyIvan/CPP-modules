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

void SuperMutant::takeDamage(int damage) {
	if (damage <= 0)
		return;
    if (this->hitPoints - damage > 0)
        this->hitPoints -= damage;
    else if (this->hitPoints != -1) {
        this->hitPoints = -1;
        std::cout << "Aaargh..." << std::endl;
    }
}

SuperMutant::~SuperMutant() {
}
