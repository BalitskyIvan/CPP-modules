#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "ScavTrap.hpp"
#include "SuperTrap.hpp"

static bool isAlive(FragTrap *fragTrap, ScavTrap *scavTrap, SuperTrap *superTrap) {
	int numAlive = 0;

	if (fragTrap->getHitPoints() != 0)
		numAlive++;
	if (scavTrap->getHitPoints() != 0)
		numAlive++;
	if (superTrap->getHitPoints() != 0)
		numAlive++;
	if (numAlive <= 1)
		return false;
	else
		return true;
}

static void random_attack(ClapTrap *robots, ClapTrap *enemy, int randomAttack) {
	switch (randomAttack) {
		case 1:
			robots->takeDamage(enemy->meleeAttack(robots->getName()));
			break;
		case 2:
			robots->takeDamage(enemy->rangedAttack(robots->getName()));
			break;
		case 3:
			robots->beRepaired(std::rand() % 10);
			break;
	}
}

int main() {
	std::srand(std::time(0));
	int randomAttack;
	FragTrap *fragTrap = new FragTrap("SANYA");
	ScavTrap *scavTrap = new ScavTrap("MIKE");
	NinjaTrap *ninjaTrap = new NinjaTrap("FUJI");
	SuperTrap *superTrap = new SuperTrap("MEGABOT");

	while (isAlive(fragTrap, scavTrap, superTrap)) {
		if (scavTrap->getHitPoints() != 0 && fragTrap->getHitPoints() != 0) {
			randomAttack = std::rand() % 4;
			if (randomAttack == 0) {
				if (std::rand() % 2)
					scavTrap->takeDamage(fragTrap->vaulthunter_dot_exe(scavTrap->getName()));
				else
					superTrap->takeDamage(fragTrap->vaulthunter_dot_exe(superTrap->getName()));
			} else {
				if (std::rand() % 2)
					random_attack(reinterpret_cast<ClapTrap *>(scavTrap), static_cast<ClapTrap *>(fragTrap), randomAttack);
				else
					random_attack(static_cast<ClapTrap *>(superTrap), static_cast<ClapTrap *>(fragTrap), randomAttack);
			}
		}
		if (fragTrap->getHitPoints() != 0 && scavTrap->getHitPoints() != 0) {
			randomAttack = std::rand() % 4;
			if (randomAttack == 0) {
				if (std::rand() % 2)
					fragTrap->takeDamage(scavTrap->challengeNewcomer(fragTrap->getName()));
				else
					superTrap->takeDamage(scavTrap->challengeNewcomer(superTrap->getName()));
			} else {
				if (std::rand() % 2)
					random_attack(static_cast<ClapTrap *>(fragTrap), reinterpret_cast<ClapTrap *>(scavTrap), randomAttack);
				else
					random_attack(static_cast<ClapTrap *>(superTrap), reinterpret_cast<ClapTrap *>(scavTrap), randomAttack);
			}
		}
		if (superTrap->getHitPoints() != 0 && superTrap->getHitPoints() != 0) {
			randomAttack = std::rand() % 4;
			if (randomAttack == 0) {
				if (std::rand() % 2)
					fragTrap->takeDamage(superTrap->ninjaShoebox(reinterpret_cast<FragTrap &>(fragTrap)));
				else
					scavTrap->takeDamage(superTrap->vaulthunter_dot_exe(scavTrap->getName()));
			} else {
				if (std::rand() % 2)
					random_attack(static_cast<ClapTrap *>(fragTrap), static_cast<ClapTrap *>(superTrap), randomAttack);
				else
					random_attack(static_cast<ClapTrap *>(scavTrap), static_cast<ClapTrap *>(superTrap), randomAttack);
			}
		}
		if (fragTrap->getHitPoints() != 0 && scavTrap->getHitPoints() != 0) {
			randomAttack = std::rand() % 3;
			if (randomAttack == 0)
				fragTrap->takeDamage(ninjaTrap->ninjaShoebox(*fragTrap));
			else if (randomAttack == 1)
				scavTrap->takeDamage(ninjaTrap->ninjaShoebox(*scavTrap));
			else if (randomAttack == 3)
				superTrap->takeDamage(ninjaTrap->meleeAttack(superTrap->getName()));
		}
	}

	if (fragTrap->getHitPoints() != 0)
		std::cout << "\nFRAG TRAPS WINS!\n"
				  << std::endl;
	if (scavTrap->getHitPoints() != 0)
		std::cout << "\nSCAV TRAPS WINS!\n"
				  << std::endl;
	if (superTrap->getHitPoints() != 0)
		std::cout << "\nSUPER TRAPS WINS!\n"
				  << std::endl;
	delete fragTrap;
	delete scavTrap;
	delete ninjaTrap;
	delete superTrap;
	return 0;
}
