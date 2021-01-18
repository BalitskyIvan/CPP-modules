//
// Created by Lonmouth Mallador on 1/18/21.
//

#ifndef EX01_SUPERMUTANT_HPP
#define EX01_SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy {
public:
	SuperMutant();
	SuperMutant(const SuperMutant &superMutant);
	void takeDamage(int);
	virtual ~SuperMutant();
};


#endif//EX01_SUPERMUTANT_HPP
