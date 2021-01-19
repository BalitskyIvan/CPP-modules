//
// Created by Lonmouth Mallador on 1/19/21.
//

#ifndef EX03_AMATERIA_HPP
#define EX03_AMATERIA_HPP


#include "ICharacter.hpp"
#include <iostream>

class ICharacter;
class AMateria {
protected:
	unsigned int _xp;
	std::string type;

private:
	AMateria();

public:
	AMateria(std::string const &type);
	AMateria(const AMateria &amateria);
	virtual ~AMateria();
	AMateria &operator=(const AMateria &aMateria);
	std::string const &getType() const;//Returns the materia type
	unsigned int getXP() const;        //Returns the Materia's XP
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};


#endif//EX03_AMATERIA_HPP
