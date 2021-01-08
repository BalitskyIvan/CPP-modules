//
// Created by lmallado on 29.12.2020.
//

#ifndef EX06_HUMANA_HPP
#define EX06_HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
private:
    std::string name;
    Weapon *weapon;
public:
    HumanA(const std::string &name, Weapon &weapon);

    void attack();
};


#endif //EX06_HUMANA_HPP
