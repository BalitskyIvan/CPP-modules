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

SuperMutant::~SuperMutant() {
}

void SuperMutant::takeDamage(int damage) {
	
}
