//
// Created by Lonmouth Mallador on 1/15/21.
//

#include "SuperTrap.hpp"


SuperTrap::SuperTrap() : ClapTrap(100, 100, 50, 50, 1, "Default SuperTrap", 20, 20, 5), FragTrap(), NinjaTrap() {
	std::cout << name + " created" << std::endl;
}

SuperTrap::SuperTrap(const std::string &name) : ClapTrap(100, 100, 50, 50, 1, name, 20, 20, 5), FragTrap(name), NinjaTrap(name){
	std::cout << name + " created" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &superTrap) : ClapTrap((ClapTrap &) superTrap), FragTrap((FragTrap &) superTrap), NinjaTrap((ClapTrap &) superTrap){
	std::cout << name + " created" << std::endl;
}

int SuperTrap::rangedAttack(const std::string &target) {
		return FragTrap::rangedAttack(target);
}
int SuperTrap::meleeAttack(const std::string &target) {
	return FragTrap::meleeAttack(target);
}

void SuperTrap::takeDamage(unsigned int amount) {
	FragTrap::takeDamage(amount);
}

void SuperTrap::beRepaired(unsigned int amount) {
	FragTrap::beRepaired(amount);
}

SuperTrap::~SuperTrap() {
	std::cout << name + " DEACTIVATED" << std::endl;

}

