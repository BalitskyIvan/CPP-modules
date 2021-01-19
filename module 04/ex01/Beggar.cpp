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

Beggar &Beggar::operator=(const Beggar &enemy) {
    if (this == &enemy) {
        return *this;
    }
    this->type = enemy.getType();
    this->hitPoints = enemy.getHP();
    return *this;
}

Beggar::~Beggar() {
    std::cout << "* WTF *" << std::endl;
}
