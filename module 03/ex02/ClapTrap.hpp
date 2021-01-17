//
// Created by Lonmouth Mallador on 1/13/21.
//

#ifndef EX02_CLAPTRAP_HPP
#define EX02_CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
protected:
	int hitPoints;
	int maxHitPoints;
	int energyPoints;
	int maxEnergyPoints;
	int level;
	std::string name;
	int meleeAttackDamage;
	int rangedAttackDamage;
	int armorDamageReduction;

public:
	const std::string &getName() const;
	ClapTrap(int hitPoints, const int maxHitPoints, int energyPoints, const int maxEnergyPoints, int level, const std::string &name, const int meleeAttackDamage, const int rangedAttackDamage, const int armorDamageReduction);
	ClapTrap &operator=(const ClapTrap &clapTrap);
	ClapTrap(ClapTrap &clapTrap);
	ClapTrap();
	int rangedAttack(std::string const &target);
	int meleeAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	int getHitPoints() const;
	int getEnergyPoints() const;
	int getLevel() const;
	int getMaxHitPoints() const;
	int getMaxEnergyPoints() const;
	int getMeleeAttackDamage() const;
	int getRangedAttackDamage() const;
	int getArmorDamageReduction() const;
	virtual ~ClapTrap();
};


#endif//EX02_CLAPTRAP_HPP
