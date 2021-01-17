//
// Created by Lonmouth Mallador on 1/13/21.
//

#ifndef EX02_CLAPTRAP_HPP
#define EX02_CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
protected:
	int hitPoints = 100;
	const int maxHitPoints = 100;
	int energyPoints = 100;
	const int maxEnergyPoints = 100;
	int level = 1;
	std::string name;
	int meleeAttackDamage = 30;
	int rangedAttackDamage = 20;
	int armorDamageReduction = 5;

public:
	int getHitPoints() const;
	int getEnergyPoints() const;
	int getLevel() const;
	const std::string &getName() const;
	ClapTrap(int hitPoints, const int maxHitPoints, int energyPoints, const int maxEnergyPoints, int level, const std::string &name, const int meleeAttackDamage, const int rangedAttackDamage, const int armorDamageReduction);
	ClapTrap &operator=(const ClapTrap &clapTrap);
	ClapTrap(ClapTrap &clapTrap);
	ClapTrap();
	virtual int rangedAttack(std::string const &target);
	virtual int meleeAttack(std::string const &target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);
	virtual ~ClapTrap();
	const int getMaxHitPoints() const;
	const int getMaxEnergyPoints() const;
	int getMeleeAttackDamage() const;
	int getRangedAttackDamage() const;
	int getArmorDamageReduction() const;
};


#endif//EX02_CLAPTRAP_HPP
