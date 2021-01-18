//
// Created by lmallado on 19.01.2021.
//

#include "Godzilla.hpp"

Godzilla::Godzilla() : Enemy(120, "Godzilla") {
    std::cout << "* ROAR RAAArrrr wroooAARr *" << std::endl;
}

Godzilla::Godzilla(const Godzilla &godzilla) : Enemy(godzilla.getHP(), godzilla.getType()) {
    std::cout << "* ROAR RAAArrrr wroooAARr *" << std::endl;
}

void Godzilla::takeDamage(int damage) {
    if (damage <= 0)
        return;
    if (this->hitPoints - damage > 0)
        this->hitPoints -= damage;
    else if (this->hitPoints != -1) {
        this->hitPoints = -1;
        std::cout << "* Arrrr Wroar...          BOOOOOOM *" << std::endl;
    }
}

Godzilla::~Godzilla() {
}