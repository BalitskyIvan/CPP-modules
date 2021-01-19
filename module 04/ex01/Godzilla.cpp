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

Godzilla &Godzilla::operator= (const Godzilla &godzilla) {
    if (this == &godzilla) {
        return *this;
    }
    this->type = godzilla.getType();
    this->hitPoints = godzilla.getHP();
    return *this;
}

Godzilla::~Godzilla() {
    std::cout << "* Arrrr Wroar...          BOOOOOOM *" << std::endl;
}