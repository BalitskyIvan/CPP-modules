//
// Created by Lonmouth Mallador on 1/19/21.
//

#ifndef EX02_TACTICALMARINE_HPP
#define EX02_TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"
#include <iostream>

class TacticalMarine : public ISpaceMarine {
public:
	TacticalMarine();
	TacticalMarine(const TacticalMarine &tacticalMarine);
	TacticalMarine &operator=(const TacticalMarine &tacticalMarine);
	ISpaceMarine *clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
	virtual ~TacticalMarine();
};


#endif//EX02_TACTICALMARINE_HPP
