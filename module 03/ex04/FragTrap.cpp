//
// Created by Lonmouth Mallador on 1/12/21.
//

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) : ClapTrap(100, 100, 100, 100, 1, name, 30, 20, 5) {
	std::cout << name + " created" << std::endl;
}

FragTrap::FragTrap() : ClapTrap(100, 100, 100, 100, 1, "Random FragTrap", 30, 20, 5) {
	std::cout << getName() + " created" << std::endl;
}

FragTrap::FragTrap(FragTrap &fragTrap) : ClapTrap(fragTrap) {
	std::cout << getName() + " created" << std::endl;
}

int FragTrap::vaulthunter_dot_exe(const std::string &target) {
	std::string attack[5] = {"bottom", "fast", "middle", "mega", "giga"};
	int damage[5] = {5, 10, 20, 50, 100};

	if (this->hitPoints <= 0) {
		std::cout << "FR4G-TP " + this->getName() + " can't attack " + " because he is dead :(" << std::endl;
		return (0);
	}
	if (this->energyPoints >= 25) {
		int randomNum = std::rand() % 5;
		std::cout << "FR4G-TP " + this->getName() + " attacks with " + attack[randomNum] + " attack and took away " + std::to_string(damage[randomNum]) + " points from " + target << std::endl;
		this->energyPoints -= 25;
		return damage[randomNum];
	} else
		std::cout << "FR4G-TP " + this->getName() + ": to low energy for this attack." << std::endl;
	return 0;
}

FragTrap::~FragTrap() {
	std::cout << getName() + " DEACTIVATED" << std::endl;
}
