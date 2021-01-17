//
// Created by Lonmouth Mallador on 1/12/21.
//

#ifndef EX00_FRAGTRAP_HPP
#define EX00_FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {
public:
	FragTrap();
	int vaulthunter_dot_exe(std::string const &target);
	FragTrap(const std::string &name);
	FragTrap(FragTrap &fragTrap);
	virtual ~FragTrap();
};


#endif//EX00_FRAGTRAP_HPP
