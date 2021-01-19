//
// Created by Lonmouth Mallador on 1/18/21.
//

#ifndef EX01_POWERFIST_HPP
#define EX01_POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist : public AWeapon {
public:
	PowerFist();
	PowerFist(const PowerFist &powerFirst);
    PowerFist &operator= (const PowerFist &weapon);
	virtual void attack() const;
	virtual ~PowerFist();
};


#endif//EX01_POWERFIST_HPP
