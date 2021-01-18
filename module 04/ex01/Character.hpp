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
	AWeapon *weapon;
	Enemy *enemy;
public:
    Character(std::string const & name);
    ~Character();
    void recoverAP();
    void equip(AWeapon*);
    void attack(Enemy*);
    std::string const& getName() const;
};


#endif//EX01_CHARACTER_HPP
