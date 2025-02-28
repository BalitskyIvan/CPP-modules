//
// Created by Lonmouth Mallador on 1/18/21.
//

#ifndef EX01_AK_47_HPP
#define EX01_AK_47_HPP

#include "AWeapon.hpp"

class Ak_47 : public AWeapon {
public:
	Ak_47(const Ak_47 &ak47);
	virtual void attack() const;
    Ak_47 &operator= (const Ak_47 &weapon);
	virtual ~Ak_47();
	Ak_47();
};


#endif//EX01_AK_47_HPP
