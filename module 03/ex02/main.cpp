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

static void random_attack(ClapTrap *robots[], ClapTrap *enemy[], int i, int attackOnRobot, int randomAttack) {
	switch (randomAttack) {
		case 1:
			robots[attackOnRobot]->takeDamage(enemy[i]->meleeAttack(robots[attackOnRobot]->getName()));
			break;
		case 2:
			robots[attackOnRobot]->takeDamage(enemy[i]->rangedAttack(robots[attackOnRobot]->getName()));
			break;
		case 3:
			robots[attackOnRobot]->beRepaired(std::rand() % 10);
			break;
	}
}

int main() {
	std::srand(std::time(0));
	int randomNum = 1 + std::rand() % 3, randomAttack;
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
			if (scavTrap[attackOnRobot]->getHitPoints() != 0 && fragTrap[i]->getHitPoints() != 0) {
				randomAttack = std::rand() % 4;
				if (randomAttack == 0)
					scavTrap[attackOnRobot]->takeDamage(fragTrap[i]->vaulthunter_dot_exe(scavTrap[attackOnRobot]->getName()));
				else
					random_attack(reinterpret_cast<ClapTrap **>(scavTrap), reinterpret_cast<ClapTrap **>(fragTrap), i, attackOnRobot, randomAttack);
			}
		}
		for (int i = 0; i < randomNum; i++) {
			int attackOnRobot = std::rand() % randomNum;
			if (fragTrap[attackOnRobot]->getHitPoints() != 0 && scavTrap[i]->getHitPoints() != 0) {
				randomAttack = std::rand() % 4;
				if (randomAttack == 0)
					fragTrap[attackOnRobot]->takeDamage(scavTrap[i]->challengeNewcomer(fragTrap[attackOnRobot]->getName()));
				else
					random_attack(reinterpret_cast<ClapTrap **>(fragTrap), reinterpret_cast<ClapTrap **>(scavTrap), i, attackOnRobot, randomAttack);
			}
		}
	}
	for (int i = 0; i < randomNum; i++)
		if (fragTrap[i]->getHitPoints() != 0) {
			std::cout << "\nFRAG TRAPS WINS!\n"
					  << std::endl;
			break;
		}
	for (int i = 0; i < randomNum; i++)
		if (scavTrap[i]->getHitPoints() != 0) {
			std::cout << "\nSCAV TRAPS WINS!\n"
					  << std::endl;
			break;
		}

	for (int i = 0; i < randomNum; i++)
		delete fragTrap[i];
	for (int i = 0; i < randomNum; i++)
		delete scavTrap[i];
	return 0;
}
