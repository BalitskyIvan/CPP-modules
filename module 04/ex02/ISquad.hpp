//
// Created by Lonmouth Mallador on 1/19/21.
//

#ifndef EX02_ISQUAD_HPP
#define EX02_ISQUAD_HPP

#include "ISpaceMarine.hpp"

class ISquad
{
public:
	virtual ~ISquad() {}
	virtual int getCount() const = 0;
	virtual ISpaceMarine* getUnit(int) const = 0;
	virtual int push(ISpaceMarine*) = 0;
};

#endif//EX02_ISQUAD_HPP
