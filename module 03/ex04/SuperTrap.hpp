//
// Created by Lonmouth Mallador on 1/15/21.
//

#ifndef EX04_SUPERTRAP_HPP
#define EX04_SUPERTRAP_HPP

#include "NinjaTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap {
public:
	SuperTrap();
	SuperTrap(const std::string &name);
	SuperTrap(const SuperTrap &superTrap);
	virtual ~SuperTrap();
	virtual int rangedAttack(const std::string &target);
	virtual int meleeAttack(const std::string &target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);
};


#endif//EX04_SUPERTRAP_HPP
