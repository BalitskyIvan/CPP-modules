//
// Created by Lonmouth Mallador on 1/14/21.
//

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(const std::string &name) : ClapTrap(60, 60, 120, 120, 1, name, 60, 5, 0) {
	std::cout << name + " created" << std::endl;
}

NinjaTrap::NinjaTrap() : ClapTrap(60, 60, 120, 120, 1, "Random Ninja", 60, 5, 0) {
	std::cout << name + " created" << std::endl;
}

NinjaTrap::NinjaTrap(ClapTrap &clapTrap) : ClapTrap(clapTrap) {
	std::cout << name + " created" << std::endl;
}

int NinjaTrap::ninjaShoebox(ClapTrap &clapTrap) {
	if (this->hitPoints > 0) {
		int randomAttack = std::rand() % 2;
		if (randomAttack == 0)
			return this->meleeAttack(clapTrap.getName());
		else
			return this->rangedAttack(clapTrap.getName());
	} else
		std::cout << this->getName() + " can't attack " + " because he is dead :(" << std::endl;
	return 0;
}

int NinjaTrap::ninjaShoebox(NinjaTrap &ninjaTrap) {
	if (this->hitPoints > 0) {
		int randomAttack = std::rand() % 2;
		if (randomAttack == 0)
			return this->meleeAttack(ninjaTrap.getName());
		else
			return this->rangedAttack(ninjaTrap.getName());
	} else
		std::cout << this->getName() + " can't attack " + " because he is dead :(" << std::endl;
	return 0;
}

int NinjaTrap::ninjaShoebox(FragTrap &fragTrap) {
	if (this->hitPoints > 0) {
		int randomAttack = std::rand() % 2;
		if (randomAttack == 0)
			return this->meleeAttack(fragTrap.getName());
		else
			return this->rangedAttack(fragTrap.getName());
	} else
		std::cout << this->getName() + " can't attack " + " because he is dead :(" << std::endl;
	return 0;
}

int NinjaTrap::ninjaShoebox(ScavTrap &scavTrap) {
	if (this->hitPoints > 0) {
		int randomAttack = std::rand() % 2;
		if (randomAttack == 0)
			return this->meleeAttack(scavTrap.getName());
		else
			return this->rangedAttack(scavTrap.getName());
	} else
		std::cout << this->getName() + " can't attack " + " because he is dead :(" << std::endl;
	return 0;
}

NinjaTrap::~NinjaTrap() { std::cout << "Ninja Trap " + getName() + " DEACTIVATED" << std::endl; }
