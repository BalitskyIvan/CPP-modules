#include "FragTrap.hpp"
#include "ScavTrap.hpp"

static bool isAlive(FragTrap *fragTrap[], ScavTrap *scavTrap[], int robotsCount) {
	int numFragAlive = 0, numScavAlive = 0;

	for (int i = 0; i < robotsCount; i++)
		if (fragTrap[i]->getHitPoints() != 0)
			numFragAlive++;
	for (int i = 0; i < robotsCount; i++)
		if (scavTrap[i]->getHitPoints() != 0)
			numScavAlive++;
	if (numFragAlive <= 0 || numScavAlive <= 0)
		return false;
	else
		return true;
}

static void randomAttackOnFragTrap(FragTrap *fragTrap[], ScavTrap *scavTrap[], int i, int attackOnRobot) {
	switch (std::rand() % 4) {
		case 0:
			fragTrap[attackOnRobot]->takeDamage(scavTrap[i]->challengeNewcomer(fragTrap[attackOnRobot]->getName()));
			break;
		case 1:
			fragTrap[attackOnRobot]->takeDamage(scavTrap[i]->meleeAttack(fragTrap[attackOnRobot]->getName()));
			break;
		case 2:
			fragTrap[attackOnRobot]->takeDamage(scavTrap[i]->rangedAttack(fragTrap[attackOnRobot]->getName()));
			break;
		case 3:
			fragTrap[attackOnRobot]->beRepaired(std::rand() % 30);
			break;
	}
}

static void randomAttackOnScavTrap(FragTrap *fragTrap[], ScavTrap *scavTrap[], int i, int attackOnRobot) {
	switch (std::rand() % 4) {
		case 0:
			scavTrap[attackOnRobot]->takeDamage(fragTrap[i]->vaulthunter_dot_exe(scavTrap[attackOnRobot]->getName()));
			break;
		case 1:
			scavTrap[attackOnRobot]->takeDamage(fragTrap[i]->meleeAttack(scavTrap[attackOnRobot]->getName()));
			break;
		case 2:
			scavTrap[attackOnRobot]->takeDamage(fragTrap[i]->rangedAttack(scavTrap[attackOnRobot]->getName()));
			break;
		case 3:
			scavTrap[attackOnRobot]->beRepaired(std::rand() % 10);
			break;
	}
}
int main() {
	std::srand(std::time(0));
	int randomNum = 1 + std::rand() % 3;
	std::string names[4] = {"SANYA", "PETYA", "BORYA", "MAKSIM"};
	std::string names_scav[4] = {"MIKE", "JOHN", "NIKITA", "VOVAN"};
	FragTrap *fragTrap[randomNum];
	ScavTrap *scavTrap[randomNum];

	for (int i = 0; i < randomNum; i++)
		fragTrap[i] = new FragTrap(names[i]);

	for (int i = 0; i < randomNum; i++)
		scavTrap[i] = new ScavTrap(names_scav[i]);

	while (isAlive(fragTrap, scavTrap, randomNum)) {
		for (int i = 0; i < randomNum; i++) {
			int attackOnRobot = std::rand() % randomNum;
			if (scavTrap[attackOnRobot]->getHitPoints() != 0 && fragTrap[i]->getHitPoints() != 0)
				randomAttackOnScavTrap(fragTrap, scavTrap, i, attackOnRobot);
		}
		for (int i = 0; i < randomNum; i++) {
			int attackOnRobot = std::rand() % randomNum;
			if (fragTrap[attackOnRobot]->getHitPoints() != 0 && scavTrap[i]->getHitPoints() != 0)
				randomAttackOnFragTrap(fragTrap, scavTrap, i, attackOnRobot);
		}
	}
	for (int i = 0; i < randomNum; i++)
		if (fragTrap[i]->getHitPoints() != 0) {
			std::cout << "\nFRAG TRAPS WINS!\n" << std::endl;
			break;
		}
	for (int i = 0; i < randomNum; i++)
		if (scavTrap[i]->getHitPoints() != 0) {
			std::cout << "\nSCAV TRAPS WINS!\n" << std::endl;
			break;
		}

	for (int i = 0; i < randomNum; i++)
		delete fragTrap[i];
	for (int i = 0; i < randomNum; i++)
		delete scavTrap[i];
	return 0;
}
