//
// Created by Lonmouth Mallador on 1/19/21.
//

#ifndef EX03_ICE_HPP
#define EX03_ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria {
public:
	Ice();
	Ice(const Ice &ice);
	AMateria *clone() const;
	Ice &operator= (const Ice &ice);
	void use(ICharacter &target);
	virtual ~Ice();
};


#endif//EX03_ICE_HPP
