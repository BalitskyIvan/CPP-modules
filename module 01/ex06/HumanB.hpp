//
// Created by lmallado on 29.12.2020.
//

#ifndef EX06_HUMANB_HPP
#define EX06_HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
private:
    std::string name;
    Weapon *weapon;
public:
    HumanB(const std::string &name);

    void setWeapon(Weapon &weapon);
    void attack();
};


#endif //EX06_HUMANB_HPP
