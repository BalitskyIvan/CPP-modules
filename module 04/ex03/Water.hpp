//
// Created by Lonmouth Mallador on 1/19/21.
//

#ifndef EX03_WATER_HPP
#define EX03_WATER_HPP


#include "AMateria.hpp"

class Water : public AMateria {
public:
	Water();
	Water(const Water &water);
	AMateria *clone() const;
	Water &operator=(const Water &water);
	void use(ICharacter &target);
	virtual ~Water();
};


#endif//EX03_WATER_HPP
