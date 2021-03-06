//
// Created by lmallado on 27.12.2020.
//

#include "Pony.hpp"

Pony::Pony(const std::string &name, const std::string &color, int maxSpeed, int rate) : name(name), color(color),
                                                                                        maxSpeed(maxSpeed),
                                                                                        rate(rate) {}

const std::string &Pony::getName() const {
    return name;
}
const std::string &Pony::getColor() const {
    return color;
}

int Pony::getMaxSpeed() const {
    return maxSpeed;
}

int Pony::getRate() const {
    return rate;
}

Pony::~Pony() {
    std::cout << getName() + " destroyed" << std::endl;
}

