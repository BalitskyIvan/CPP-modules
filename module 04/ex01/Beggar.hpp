//
// Created by lmallado on 19.01.2021.
//

#ifndef EX01_BEGGAR_HPP
#define EX01_BEGGAR_HPP

#include "Enemy.hpp"

class Beggar : public Enemy {
public:
	Beggar();
	Beggar(const Beggar &beggar);
    Beggar &operator=(const Beggar &beggar);
    virtual ~Beggar();
};


#endif//EX01_BEGGAR_HPP
