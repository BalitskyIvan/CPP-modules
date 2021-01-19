//
// Created by Lonmouth Mallador on 1/19/21.
//

#ifndef EX03_CHARACTER_HPP
#define EX03_CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {
private:
	std::string name;
	static const int maxInvent = 4;
	AMateria *invent[maxInvent];
	Character();

public:
	Character(const std::string &name);
	Character(const Character &character);
	Character &operator=(const Character &character);
	const std::string &getName() const;
	AMateria *getInvent(int i) const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
	virtual ~Character();
};


#endif//EX03_CHARACTER_HPP
