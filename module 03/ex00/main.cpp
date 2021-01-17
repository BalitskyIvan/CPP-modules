#include "FragTrap.hpp"

static bool isAlive(FragTrap *robots[], int robotsCount) {
	int numAlive = 0;

	for (int i = 0; i < robotsCount; i++)
		if (robots[i]->getHitPoints() != 0)
			numAlive++;
	if (numAlive <= 1)
		return false;
	else
		return true;
}

static void random_attack(FragTrap *robots[], int i, int attackOnRobot) {
	switch (std::rand() % 4) {
		case 0:
			robots[attackOnRobot]->takeDamage(robots[i]->vaulthunter_dot_exe(robots[attackOnRobot]->getName()));
			break;
		case 1:
			robots[attackOnRobot]->takeDamage(robots[i]->meleeAttack(robots[attackOnRobot]->getName()));
			break;
		case 2:
			robots[attackOnRobot]->takeDamage(robots[i]->rangedAttack(robots[attackOnRobot]->getName()));
			break;
		case 3:
			robots[attackOnRobot]->beRepaired(std::rand() % 20);
			break;
	}
}

int main() {
	std::srand(std::time(0));
	int randomNum = 2 + std::rand() % 5;
	bool isSomeoneWins = false;
	std::string names[6] = {"SANYA", "PETYA", "BORYA", "MAKSIM", "NIKITA", "VOVAN"};
	FragTrap *robots[randomNum];

	for (int i = 0; i < randomNum; i++)
		robots[i] = new FragTrap(names[i]);

	while (isAlive(robots, randomNum)) {
		for (int i = 0; i < randomNum; i++) {
			int attackOnRobot = std::rand() % randomNum;
			if (robots[attackOnRobot]->getHitPoints() != 0 && robots[i]->getHitPoints() != 0 && i != attackOnRobot)
				random_attack(robots, i, attackOnRobot);
		}
	}
	for (int i = 0; i < randomNum; i++)
		if (robots[i]->getHitPoints() != 0) {
			std::cout << "\n" + robots[i]->getName() + " WINS!\n" << std::endl;
			isSomeoneWins = true;
		}
	if (!isSomeoneWins)
		std::cout << " ALL ROBOTS DIES " << std::endl;
	for (int i = 0; i < randomNum; i++)
		delete robots[i];
	return 0;
}
