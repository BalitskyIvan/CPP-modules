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

RadScorpion &RadScorpion::operator= (const RadScorpion &radScorpion) {
    if (this == &radScorpion) {
        return *this;
    }
    this->type = radScorpion.getType();
    this->hitPoints = radScorpion.getHP();
    return *this;
}

RadScorpion::~RadScorpion() {
    std::cout << "* SPROTCH *" << std::endl;
}