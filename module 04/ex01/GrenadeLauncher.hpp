//
// Created by Lonmouth Mallador on 1/18/21.
//

#ifndef EX01_GRENADELAUNCHER_HPP
#define EX01_GRENADELAUNCHER_HPP

#include "AWeapon.hpp"

class GrenadeLauncher : public AWeapon {
public:
	GrenadeLauncher(const GrenadeLauncher &grenadeLauncher);
	virtual void attack() const;
    GrenadeLauncher &operator= (const GrenadeLauncher &weapon);
	virtual ~GrenadeLauncher();
	GrenadeLauncher();
};


#endif//EX01_GRENADELAUNCHER_HPP
