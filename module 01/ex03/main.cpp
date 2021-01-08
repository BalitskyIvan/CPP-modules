#include "ZombieHord.hpp"

int main() {
    ZombieHord *zombieHord1, *zombieHord2, *zombieHord3;

    std::cout << "Generating 5 zombies ...\n" << std::endl;
    zombieHord1 = new ZombieHord(5);
    zombieHord1->announce();
    std::cout << "\nGenerating 10 zombies ...\n" << std::endl;
    zombieHord2 = new ZombieHord(10);
    zombieHord2->announce();
    std::cout << "\nGenerating 15 zombies ...\n" << std::endl;
    zombieHord3 = new ZombieHord(15);
    zombieHord3->announce();

    std::cout << "\nHord 1 announcing ...\n" << std::endl;
    zombieHord1->announce();

    delete zombieHord1;
    delete zombieHord2;
    delete zombieHord3;

    zombieHord2 = NULL;
    zombieHord3 = NULL;
    zombieHord1 = NULL;
    return 0;
}
