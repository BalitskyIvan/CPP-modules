//
// Created by lmallado on 19.01.2021.
//

#ifndef EX01_GODZILLA_HPP
#define EX01_GODZILLA_HPP

#include "Enemy.hpp"

class Godzilla : public Enemy {
public:
	Godzilla();
	Godzilla(const Godzilla &godzilla);
    Godzilla &operator= (const Godzilla &godzilla);
	virtual ~Godzilla();
};

#endif//EX01_GODZILLA_HPP
