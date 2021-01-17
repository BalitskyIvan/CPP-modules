//
// Created by Lonmouth Mallador on 1/13/21.
//

#ifndef EX01_SCAVTRAP_HPP
#define EX01_SCAVTRAP_HPP

#include <iostream>

class ScavTrap {
private:
	int hitPoints = 100;
	const int maxHitPoints = 100;
	int energyPoints = 50;
	const int maxEnergyPoints = 50;
	int level = 1;
	std::string name;
	const int meleeAttackDamage = 20;
	const int rangedAttackDamage = 15;
	const int armorDamageReduction = 3;

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
