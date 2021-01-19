//
// Created by Lonmouth Mallador on 1/18/21.
//

#ifndef EX01_CHARACTER_HPP
#define EX01_CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include <iostream>

class Character {
private:
	std::string name;
	int actionPoints;
	static const int maxAp = 40;
	AWeapon *weapon;

public:
	Character(std::string const &name);
	Character(const Character &character);
	Character &operator=(const Character &character);
	int getActionPoints() const;
	AWeapon *getWeapon() const;
	virtual ~Character();
	void recoverAP();
	void equip(AWeapon *);
	void attack(Enemy *);
	std::string const &getName() const;
};

std::ostream &operator<<(std::ostream &os, const Character &character);

#endif//EX01_CHARACTER_HPP
