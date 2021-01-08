#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main() {

    ZombieEvent zombieEvent;
    Zombie *zombie1, *zombie2, *zombie3;


    std::cout << "Generating a zombie Никита..." << std::endl;
    zombie1 = zombieEvent.newZombie("Никита");
    std::cout << "Generating a zombie Карл..." << std::endl;
    zombie2 = zombieEvent.newZombie("Карл");
    std::cout << "Generating a zombie Андрей..." << std::endl;
    zombie3 = zombieEvent.newZombie("Андрей");
    std::cout << "\nAND NOW THEY WILL ANNOUNCE\n" << std::endl;

    zombie1->announce();
    zombie2->announce();
    zombie3->announce();

    delete zombie1;
    std::cout << "\nНикита deallocated" << std::endl;

    delete zombie2;
    std::cout << "Карл deallocated" << std::endl;

    delete zombie3;
    std::cout << "Андрей deallocated" << std::endl;

    zombie1 = NULL;
    zombie2 = NULL;
    zombie3 = NULL;

    std::cout << "\nAND NOW WE ARE SEE ARMY OF RANDOM ZOMBIES\n" << std::endl;

    int randomNum = 5 + rand() % MAX_RANDOM_ZOMBIES;
    for (int i = 0; i <= randomNum; i++)
        zombieEvent.randomChump();

    return 0;
}
