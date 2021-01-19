//
// Created by Lonmouth Mallador on 1/18/21.
//

#ifndef EX01_AWEAPON_HPP
#define EX01_AWEAPON_HPP

#include <iostream>


class AWeapon {
protected:
    int apcost;
    int damage;
    std::string name;
private:
	AWeapon();

public:
	AWeapon(std::string const &name, int apcost, int damage);
	virtual ~AWeapon();
	AWeapon(AWeapon &aWeapon);
	int getAPCost() const;
	int getDamage() const;
	std::string const &getName() const;
	AWeapon &operator=(const AWeapon &aWeapon);
	virtual void attack() const = 0;
};


#endif//EX01_AWEAPON_HPP
