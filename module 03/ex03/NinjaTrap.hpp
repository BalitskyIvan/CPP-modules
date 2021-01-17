//
// Created by Lonmouth Mallador on 1/14/21.
//

#ifndef EX03_NINJATRAP_HPP
#define EX03_NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>


class NinjaTrap : public ClapTrap {
public:
	NinjaTrap();
	NinjaTrap(ClapTrap &clapTrap);
	NinjaTrap(const std::string &name);
	int ninjaShoebox(ClapTrap &clapTrap);
	int ninjaShoebox(NinjaTrap &ninjaTrap);
	int ninjaShoebox(FragTrap &fragTrap);
	int ninjaShoebox(ScavTrap &scavTrap);
	virtual ~NinjaTrap();
};


#endif//EX03_NINJATRAP_HPP
