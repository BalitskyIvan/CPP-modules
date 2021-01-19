//
// Created by Lonmouth Mallador on 1/19/21.
//

#ifndef EX02_ASSAULTTERMINATOR_HPP
#define EX02_ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"
#include <iostream>

class AssaultTerminator : public ISpaceMarine {
public:
	AssaultTerminator();
	AssaultTerminator(const AssaultTerminator &assaultTerminator);
	AssaultTerminator &operator=(const AssaultTerminator &assaultTerminator);
	ISpaceMarine *clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
	virtual ~AssaultTerminator();
};


#endif//EX02_ASSAULTTERMINATOR_HPP
