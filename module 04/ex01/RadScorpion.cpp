//
// Created by Lonmouth Mallador on 1/18/21.
//

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "Rad Scorpion") {
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &radScorpion) : Enemy(radScorpion.getHP(), radScorpion.getType()) {
    std::cout << "* click click click *" << std::endl;
}

void RadScorpion::takeDamage(int damage) {
    if (damage <= 0)
        return;
    if (this->hitPoints - damage > 0)
        this->hitPoints -= damage;
    else if (this->hitPoints != -1) {
        this->hitPoints = -1;
        std::cout << "* SPROTCH *" << std::endl;
    }
}

RadScorpion::~RadScorpion() {
}