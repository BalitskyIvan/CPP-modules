//
// Created by Lonmouth Mallador on 1/19/21.
//

#ifndef EX03_FIRE_HPP
#define EX03_FIRE_HPP

#include "AMateria.hpp"

class Fire : public AMateria {
public:
	Fire();
	Fire(const Fire &fire);
	AMateria *clone() const;
	Fire &operator=(const Fire &fire);
	void use(ICharacter &target);
	virtual ~Fire();
};


#endif//EX03_FIRE_HPP
