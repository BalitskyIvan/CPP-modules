//
// Created by Lonmouth Mallador on 1/13/21.
//

#ifndef EX01_SCAVTRAP_HPP
#define EX01_SCAVTRAP_HPP

#include <iostream>

class ScavTrap {
private:
	int hitPoints;
	const int maxHitPoints;
	int energyPoints;
	int maxEnergyPoints;
	int level;
	std::string name;
	const int meleeAttackDamage;
	const int rangedAttackDamage;
	unsigned int armorDamageReduction;

public:
	int getHitPoints() const;
	int getEnergyPoints() const;
	int getLevel() const;
	const std::string &getName() const;
	ScavTrap &operator=(const ScavTrap &fragTrap);
	int rangedAttack(std::string const &target);
	int meleeAttack(std::string const &target);
	int challengeNewcomer(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	ScavTrap();
	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap& scavTrap);
	virtual ~ScavTrap();

};


#endif//EX01_SCAVTRAP_HPP
