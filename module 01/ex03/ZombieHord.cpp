//
// Created by lmallado on 29.12.2020.
//

#include "ZombieHord.hpp"

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



ZombieHord::ZombieHord(int n) : N(n) {
    ZombieHord::zombieHord = new Zombie*[N];

    for (int i = 0; i < N; i++)
    {
        ZombieHord::zombieHord[i] = new Zombie(getRandomName());
        ZombieHord::zombieHord[i]->setType(getRandomType());
    }

}

void ZombieHord::announce() {
    for (int i = 0; i < N; i++)
    {
        zombieHord[i]->announce();
    }
}

ZombieHord::~ZombieHord() {
    for (int i = 0; i < N; i++)
    {
        delete zombieHord[i];
        zombieHord[i] = NULL;
    }
    delete zombieHord;
    zombieHord = NULL;
}
