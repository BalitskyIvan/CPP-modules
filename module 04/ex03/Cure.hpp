//
// Created by Lonmouth Mallador on 1/19/21.
//

#ifndef EX03_CURE_HPP
#define EX03_CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {
public:
	Cure();
	Cure(const Cure &cure);
	AMateria *clone() const;
	Cure &operator=(const Cure &cure);
	void use(ICharacter &target);
	virtual ~Cure();
};


#endif//EX03_CURE_HPP
