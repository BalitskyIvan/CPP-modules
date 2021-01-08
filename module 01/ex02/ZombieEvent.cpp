//
// Created by lmallado on 29.12.2020.
//

#include "ZombieEvent.hpp"

static std::string getRandomType()
{
    std::string types[TYPES_NUM] = {
            "Большеголовый", "Ползучий", "Одноногий", "Однорукий", "Многоликий",
            "Гниющий", "Одноглазый", "Ведроголовый", "Злючий", "Дераганый"
    };
    return (types[rand() % TYPES_NUM]);
}

static std::string getRandomName()
{
    std::string types[TYPES_NUM] = {
            "Никитос", "Андрюха", "Карл", "Леха", "Саня",
            "Антоха", "Владос", "Данила", "Илюха", "Вадим"
    };
    return (types[rand() % TYPES_NUM]);
}


void ZombieEvent::setZombieType(Zombie *zombie, std::string type) {
    zombie->setType(type);
}

Zombie *ZombieEvent::newZombie(std::string name) {
    Zombie *zombie = new Zombie(name);
    setZombieType(zombie, getRandomType());

    return zombie;
}

void ZombieEvent::randomChump() {
    Zombie zombie(getRandomName());
    zombie.setType(getRandomType());
    zombie.announce();
}
