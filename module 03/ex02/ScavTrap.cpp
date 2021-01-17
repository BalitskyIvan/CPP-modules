//
// Created by Lonmouth Mallador on 1/13/21.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(100, 100, 50, 50, 1, name, 20, 15, 3) {
	std::cout << "ScavTrap " + name + " created" << std::endl;
}

ScavTrap::ScavTrap() : ClapTrap(100, 100, 50, 50, 1, "Random ScavTrap", 20, 15, 3) {
	std::cout << "ScavTrap " + getName() + " created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap) : ClapTrap((ClapTrap &) scavTrap) {
	std::cout << "ScavTrap " + getName() + " created" << std::endl;
}

int ScavTrap::challengeNewcomer(const std::string &target) {
	std::string attack[3] = {"SLOWLY", "TRICKY", "HEADSHOT"};
	int damage[3] = {5, 10, 100};

	if (this->hitPoints <= 0) {
		std::cout << "ScavTrap " + this->getName() + " can't attack " + " because he is dead :(" << std::endl;
		return (0);
	}
	if (this->energyPoints >= 25) {
		int randomNum = std::rand() % 3;
		std::cout << "ScavTrap " + this->getName() + " attacks with " + attack[randomNum] + " attack and took away " + std::to_string(damage[randomNum]) + " points from " + target << std::endl;
		this->energyPoints -= 25;
		return damage[randomNum];
	} else
		std::cout << "ScavTrap " + this->getName() + ": to low energy for this attack." << std::endl;
	return 0;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " + name + " DEACTIVATED" << std::endl;
}
