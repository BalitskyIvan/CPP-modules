//
// Created by Lonmouth Mallador on 1/12/21.
//

#ifndef EX00_FRAGTRAP_HPP
#define EX00_FRAGTRAP_HPP

#include <iostream>

class FragTrap {
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
	FragTrap &operator=(const FragTrap &fragTrap);
	int rangedAttack(std::string const &target);
	int meleeAttack(std::string const &target);
	int vaulthunter_dot_exe(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	FragTrap();
	FragTrap(const std::string &name);
	FragTrap(FragTrap &fragTrap);
	virtual ~FragTrap();
};


#endif//EX00_FRAGTRAP_HPP
