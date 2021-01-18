//
// Created by Lonmouth Mallador on 1/18/21.
//

#ifndef EX01_POWERFIRST_HPP
#define EX01_POWERFIRST_HPP

#include "AWeapon.hpp"

class PowerFirst : public AWeapon{
public:
	PowerFirst();
	PowerFirst(const PowerFirst &powerFirst);
	void attack() const;
	virtual ~PowerFirst();
};


#endif//EX01_POWERFIRST_HPP
