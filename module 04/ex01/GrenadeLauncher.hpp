//
// Created by Lonmouth Mallador on 1/18/21.
//

#ifndef EX01_GRENADELAUNCHER_HPP
#define EX01_GRENADELAUNCHER_HPP

#include "AWeapon.hpp"

class GrenadeLauncher : public AWeapon {
public:
	GrenadeLauncher(const GrenadeLauncher &grenadeLauncher);
	void attack() const;
	virtual ~GrenadeLauncher();
	GrenadeLauncher();
};


#endif//EX01_GRENADELAUNCHER_HPP
