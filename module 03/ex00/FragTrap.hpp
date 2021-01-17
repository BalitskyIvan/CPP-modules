//
// Created by Lonmouth Mallador on 1/12/21.
//

#ifndef EX00_FRAGTRAP_HPP
#define EX00_FRAGTRAP_HPP

#include <iostream>

class FragTrap {
private:
	int hitPoints = 100;
	const int maxHitPoints = 100;
	int energyPoints = 100;
	const int maxEnergyPoints = 100;
	int level = 1;
	std::string name;
	const int meleeAttackDamage = 30;
	const int rangedAttackDamage = 20;
	const int armorDamageReduction = 5;

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
