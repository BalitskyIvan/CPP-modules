//
// Created by Lonmouth Mallador on 1/18/21.
//

#ifndef EX01_RADSCORPION_HPP
#define EX01_RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion : public Enemy {
public:
    RadScorpion();
    RadScorpion(const RadScorpion &radScorpion);
    void takeDamage(int);
    virtual ~RadScorpion();
};


#endif//EX01_RADSCORPION_HPP
