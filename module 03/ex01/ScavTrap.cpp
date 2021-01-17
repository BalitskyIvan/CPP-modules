//
// Created by Lonmouth Mallador on 1/13/21.
//

#include "ScavTrap.hpp"

ScavTrap &ScavTrap::operator=(const ScavTrap &fragTrap) {
	std::cout << "Assignation operator called" << std::endl;
	if (this == &fragTrap) {
		return *this;
	}
	this->name = fragTrap.getName();
	this->energyPoints = fragTrap.getEnergyPoints();
	this->hitPoints = fragTrap.getHitPoints();
	this->level = fragTrap.getLevel();
	return *this;
}

ScavTrap::ScavTrap(const ScavTrap &fragTrap) {
	std::cout << "ScavTrap " + name + " created" << std::endl;
	this->name = fragTrap.getName();
	this->energyPoints = fragTrap.getEnergyPoints();
	this->hitPoints = fragTrap.getHitPoints();
	this->level = fragTrap.getLevel();
}

ScavTrap::ScavTrap(const std::string &name) : name(name) {
	std::cout << "ScavTrap " + name + " created" << std::endl;
}

ScavTrap::ScavTrap() : name("Default ScavTrap") {
	std::cout << "ScavTrap " + name + " created" << std::endl;
}

int ScavTrap::rangedAttack(const std::string &target) {
	if (this->hitPoints > 0) {
		std::cout << "ScavTrap " + this->getName() + " attacks " + target + " at range, causing " + std::to_string(this->rangedAttackDamage) + " points of damage!" << std::endl;
		return (this->rangedAttackDamage);
	} else {
		std::cout << "ScavTrap " + this->getName() + " can't attack " + " because he is dead :(" << std::endl;
		return (0);
	}
}

int ScavTrap::meleeAttack(const std::string &target) {
	if (this->hitPoints > 0) {
		std::cout << "ScavTrap " + this->getName() + " attacks " + target + " at range, causing " + std::to_string(this->meleeAttackDamage) + " points of damage!" << std::endl;
		return (this->meleeAttackDamage);
	} else {
		std::cout << "ScavTrap " + this->getName() + " can't attack " + " because he is dead :(" << std::endl;
		return (0);
	}
}
void ScavTrap::takeDamage(unsigned int amount) {
	if (amount > armorDamageReduction) {
		std::cout << "ScavTrap " + this->getName() + " has taken damage of " + std::to_string(amount) + " points" << std::endl;
		this->hitPoints -= amount;
		if (this->hitPoints <= 0) {
			this->hitPoints = 0;
			std::cout << "ScavTrap " + this->getName() + " dead :(" << std::endl;
		}
	} else
		std::cout << "ScavTrap " + this->getName() + " repulsed the attack" << std::endl;
}

int ScavTrap::challengeNewcomer(const std::string &target) {
	std::string attack[3] = {"SLOWLY", "TRICKY", "HEADSHOT"};
	int damage[3] = {5, 10, 100};

	if (this->hitPoints <= 0)
	{
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

void ScavTrap::beRepaired(unsigned int amount) {
	if (this->hitPoints > 0) {

		this->hitPoints += amount;
		if (this->hitPoints > maxHitPoints) {
			std::cout << "ScavTrap " + this->getName() + " has repaired to max points" << std::endl;
			this->hitPoints = maxHitPoints;
		} else
			std::cout << "ScavTrap " + this->getName() + " has repaired of " + std::to_string(amount) + " points" << std::endl;
	} else
		std::cout << "ScavTrap " + this->getName() + " can't be repaired " + " because he is dead :(" << std::endl;
}

int ScavTrap::getHitPoints() const {
	return hitPoints;
}

int ScavTrap::getEnergyPoints() const {
	return energyPoints;
}

int ScavTrap::getLevel() const {
	return level;
}
const std::string &ScavTrap::getName() const {
	return name;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap " + getName() + " DEACTIVATED" << std::endl;

}
