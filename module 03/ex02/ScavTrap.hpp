//
// Created by Lonmouth Mallador on 1/13/21.
//

#ifndef EX01_SCAVTRAP_HPP
#define EX01_SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	ScavTrap();
	int challengeNewcomer(std::string const &target);
	ScavTrap(const std::string &name);
	ScavTrap(const ScavTrap &scavTrap);
	virtual ~ScavTrap();
};


#endif//EX01_SCAVTRAP_HPP
