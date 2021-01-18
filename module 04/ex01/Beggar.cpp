//
// Created by lmallado on 19.01.2021.
//

#include "Beggar.hpp"

Beggar::Beggar() : Enemy(10, "Beggar") {
    std::cout << "* HEY YOU, GIVE ME YOUR MONEY *" << std::endl;
}

Beggar::Beggar(const Beggar &beggar) : Enemy(beggar.getHP(), beggar.getType()) {
    std::cout << "* HEY YOU, GIVE ME YOUR MONEY *" << std::endl;
}

void Beggar::takeDamage(int damage) {
    if (damage <= 0)
        return;
    if (this->hitPoints - damage > 0)
        this->hitPoints -= damage;
	else if (this->hitPoints != -1) {
		this->hitPoints = -1;
		std::cout << "* WTF *" << std::endl;
	}
}

Beggar::~Beggar() {
}