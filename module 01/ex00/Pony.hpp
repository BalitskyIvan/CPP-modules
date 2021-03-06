//
// Created by lmallado on 27.12.2020.
//

#ifndef EX00_PONY_HPP
#define EX00_PONY_HPP


#include <iostream>

class Pony {
private:
    std::string name;
    std::string color;
    int maxSpeed;
    int rate;
public:
    Pony(const std::string &name, const std::string &color, int maxSpeed, int rate);

    virtual ~Pony();

    const std::string &getName() const;

    const std::string &getColor() const;

    int getMaxSpeed() const;

    int getRate() const;

};


#endif //EX00_PONY_HPP
