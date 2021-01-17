//
// Created by Lonmouth Mallador on 1/12/21.
//

#include "FragTrap.hpp"


FragTrap::FragTrap(const std::string &name) : name(name) {
	std::cout << "FR4G-TP " + name + " created" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &fragTrap) {
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

FragTrap::FragTrap(FragTrap &fragTrap) {
	std::cout << "FR4G-TP " + name + " created" << std::endl;
	this->name = fragTrap.getName();
	this->energyPoints = fragTrap.getEnergyPoints();
	this->hitPoints = fragTrap.getHitPoints();
	this->level = fragTrap.getLevel();
}

FragTrap::FragTrap() : name("Default FragTrap") {
	std::cout << "FR4G-TP " + name + " created" << std::endl;
}

int FragTrap::rangedAttack(const std::string &target) {
	if (this->hitPoints > 0) {
		std::cout << "FR4G-TP " + this->getName() + " attacks " + target + " at range, causing " + std::to_string(this->rangedAttackDamage) + " points of damage!" << std::endl;
		return (this->rangedAttackDamage);
	} else {
		std::cout << "FR4G-TP " + this->getName() + " can't attack " + " because he is dead :(" << std::endl;
		return (0);
	}
}

int FragTrap::meleeAttack(const std::string &target) {
	if (this->hitPoints > 0) {
		std::cout << "FR4G-TP " + this->getName() + " attacks " + target + " at range, causing " + std::to_string(this->meleeAttackDamage) + " points of damage!" << std::endl;
		return (this->meleeAttackDamage);
	} else {
		std::cout << "FR4G-TP " + this->getName() + " can't attack " + " because he is dead :(" << std::endl;
		return (0);
	}
}
void FragTrap::takeDamage(unsigned int amount) {
	if (amount > armorDamageReduction) {
		std::cout << "FR4G-TP " + this->getName() + " has taken damage of " + std::to_string(amount) + " points" << std::endl;
		this->hitPoints -= amount;
		if (this->hitPoints <= 0) {
			this->hitPoints = 0;
			std::cout << "FR4G-TP " + this->getName() + " dead :(" << std::endl;
		}
	} else
		std::cout << "FR4G-TP " + this->getName() + " repulsed the attack" << std::endl;
}

int FragTrap::vaulthunter_dot_exe(const std::string &target) {
	std::string attack[5] = {"bottom", "fast", "middle", "mega", "giga"};
	int damage[5] = {5, 10, 20, 50, 100};

	if (this->hitPoints <= 0)
	{
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

void FragTrap::beRepaired(unsigned int amount) {
	if (this->hitPoints > 0) {
		this->hitPoints += amount;
		if (this->hitPoints > maxHitPoints) {
			std::cout << "FR4G-TP " + this->getName() + " has repaired of " + std::to_string(0) + " points" << std::endl;
			this->hitPoints = maxHitPoints;
		} else
			std::cout << "FR4G-TP " + this->getName() + " has repaired of " + std::to_string(amount) + " points" << std::endl;
	} else
		std::cout << "FR4G-TP " + this->getName() + " can't be repaired " + " because he is dead :(" << std::endl;
}

int FragTrap::getHitPoints() const {
	return hitPoints;
}

int FragTrap::getEnergyPoints() const {
	return energyPoints;
}

int FragTrap::getLevel() const {
	return level;
}
const std::string &FragTrap::getName() const {
	return name;
}

FragTrap::~FragTrap() {
	std::cout << "FR4G-TP " + getName() + " DEACTIVATED" << std::endl;
}