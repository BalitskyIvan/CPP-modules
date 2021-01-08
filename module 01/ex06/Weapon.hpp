//
// Created by lmallado on 29.12.2020.
//

#ifndef EX06_WEAPON_HPP
#define EX06_WEAPON_HPP

#include <iostream>

class Weapon {
private:
    std::string type;
public:
    Weapon(std::string type);

    const std::string &getType() const;
    void setType(std::string type);
};


#endif //EX06_WEAPON_HPP
