//
// Created by Lonmouth Mallador on 1/18/21.
//

#ifndef EX01_PLASMARIFLE_HPP
#define EX01_PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
public:
	PlasmaRifle();
	PlasmaRifle(const PlasmaRifle &plasmaRifle);
	void attack() const;
	virtual ~PlasmaRifle();
};


#endif//EX01_PLASMARIFLE_HPP
