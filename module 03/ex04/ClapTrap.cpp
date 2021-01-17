//
// Created by Lonmouth Mallador on 1/13/21.
//

#include "ClapTrap.hpp"

int ClapTrap::rangedAttack(const std::string &target) {
	if (this->hitPoints > 0) {
		std::cout << this->getName() + " attacks " + target + " at range, causing " + std::to_string(this->rangedAttackDamage) + " points of damage!" << std::endl;
		return (this->rangedAttackDamage);
	} else {
		std::cout << this->getName() + " can't attack " + " because he is dead :(" << std::endl;
		return (0);
	}
}

int ClapTrap::meleeAttack(const std::string &target) {
	if (this->hitPoints > 0) {
		std::cout << this->getName() + " attacks " + target + " at range, causing " + std::to_string(this->meleeAttackDamage) + " points of damage!" << std::endl;
		return (this->meleeAttackDamage);
	} else {
		std::cout << this->getName() + " can't attack " + " because he is dead :(" << std::endl;
		return (0);
	}
}
void ClapTrap::takeDamage(unsigned int amount) {
	if (amount > armorDamageReduction) {
		std::cout << this->getName() + " has taken damage of " + std::to_string(amount) + " points" << std::endl;
		this->hitPoints -= amount;
		if (this->hitPoints <= 0) {
			this->hitPoints = 0;
			std::cout << this->getName() + " dead :(" << std::endl;
		}
	} else
		std::cout << this->getName() + " repulsed the attack" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->hitPoints > 0) {
		this->hitPoints += amount;
		if (this->hitPoints > maxHitPoints) {
			std::cout << this->getName() + " has repaired to max points" << std::endl;

			this->hitPoints = maxHitPoints;
		} else
			std::cout << this->getName() + " has repaired of " + std::to_string(amount) + " points" << std::endl;
	} else
		std::cout << this->getName() + " can't be repaired " + " because he is dead :(" << std::endl;
}

ClapTrap::ClapTrap(int hitPoints, const int maxHitPoints, int energyPoints, const int maxEnergyPoints, int level, const std::string &name, const int meleeAttackDamage, const int rangedAttackDamage, const int armorDamageReduction) : hitPoints(hitPoints), maxHitPoints(maxHitPoints), energyPoints(energyPoints), maxEnergyPoints(maxEnergyPoints), level(level), name(name), meleeAttackDamage(meleeAttackDamage), rangedAttackDamage(rangedAttackDamage), armorDamageReduction(armorDamageReduction) {
	std::cout << "Clap trap " + getName() + " constructor called" << std::endl;
}
ClapTrap::~ClapTrap() {
	std::cout << "Clap trap " + getName() + " destructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &clapTrap) {
	this->name = clapTrap.getName();
	this->energyPoints = clapTrap.getEnergyPoints();
	this->hitPoints = clapTrap.getHitPoints();
	this->level = clapTrap.getLevel();
}
ClapTrap &ClapTrap::operator=(const ClapTrap &clapTrap) {
	std::cout << "Assignation operator called" << std::endl;
	if (this == &clapTrap) {
		return *this;
	}
	this->name = clapTrap.getName();
	this->energyPoints = clapTrap.getEnergyPoints();
	this->hitPoints = clapTrap.getHitPoints();
	this->level = clapTrap.getLevel();
	return *this;
}
ClapTrap::ClapTrap() {}

const int ClapTrap::getMaxHitPoints() const {
	return maxHitPoints;
}
const int ClapTrap::getMaxEnergyPoints() const {
	return maxEnergyPoints;
}
int ClapTrap::getMeleeAttackDamage() const {
	return meleeAttackDamage;
}
int ClapTrap::getRangedAttackDamage() const {
	return rangedAttackDamage;
}
int ClapTrap::getArmorDamageReduction() const {
	return armorDamageReduction;
}

int ClapTrap::getHitPoints() const {
	return hitPoints;
}

int ClapTrap::getEnergyPoints() const {
	return energyPoints;
}

int ClapTrap::getLevel() const {
	return level;
}
const std::string &ClapTrap::getName() const {
	return name;
}