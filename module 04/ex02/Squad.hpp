//
// Created by Lonmouth Mallador on 1/19/21.
//

#ifndef EX02_SQUAD_HPP
#define EX02_SQUAD_HPP

#include "ISquad.hpp"
#include <iostream>

class Squad : public ISquad {
private:
	int count;
	ISpaceMarine **squad;

public:
	Squad();
	Squad(const Squad &squad);
	Squad &operator=(const Squad &squad);
	int getCount() const;
	ISpaceMarine *getUnit(int i) const;
	int push(ISpaceMarine *marine);
	virtual ~Squad();
};


#endif//EX02_SQUAD_HPP
