#include <iostream>
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"

int main() {
	{
		std::cout << "---------STANDART TESTS DEPLOYED---------\n"
				  << std::endl;

		ISpaceMarine *bob = new TacticalMarine;
		ISpaceMarine *jim = new AssaultTerminator;
		ISquad *vlc = new Squad;
		vlc->push(bob);
		vlc->push(jim);

		for (int i = 0; i < vlc->getCount(); ++i) {
			ISpaceMarine *cur = vlc->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
		delete vlc;
	}
	{
		std::cout << "\n---------MY TEST 1 DEPLOYED---------\n"
				  << std::endl;
		ISquad *vlc = new Squad;
		vlc->push(NULL);
		vlc->push(NULL);

		for (int i = 0; i < 5; ++i)
			vlc->getUnit(i);
		delete vlc;
	}
	{
		std::cout << "\n---------MY TEST 2 DEPLOYED---------\n"
				  << std::endl;
		Squad *vlc = new Squad;
		ISpaceMarine *bob = new TacticalMarine;
		ISpaceMarine *jim = new AssaultTerminator;

		vlc->push(bob);
		vlc->push(jim);
		vlc->push(bob);
		vlc->push(jim);
		vlc->push(bob);
		vlc->push(jim);
		vlc->push(bob);
		vlc->push(jim);
		vlc->push(bob);
		vlc->push(jim);
		vlc->push(bob);
		vlc->push(jim);
		vlc->push(bob);
		vlc->push(NULL);
		vlc->push(NULL);
		vlc->push(NULL);
		vlc->push(NULL);
		vlc->push(NULL);
		vlc->push(NULL);
		vlc->push(NULL);
		vlc->push(NULL);

		for (int i = 0; i < vlc->getCount(); ++i) {
			ISpaceMarine *cur = vlc->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}

		std::cout << "\n"<< std::endl;

		for (int i = 0; i < 10; i++)
			vlc->push(new AssaultTerminator);
		for (int i = 0; i < 10; i++)
			vlc->push(new TacticalMarine);

		std::cout << "\n"<< std::endl;

		Squad *vlc2 = new Squad(*vlc);

		for (int i = 0; i < vlc->getCount(); ++i) {
			ISpaceMarine *cur = vlc->getUnit(i);
			ISpaceMarine *cur2 = vlc2->getUnit(i);

			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
			cur2->battleCry();
			cur2->rangedAttack();
			cur2->meleeAttack();
		}
		std::cout << "\n"<< std::endl;
		delete vlc;
		delete vlc2;
	}
	{
		std::cout << "\n---------MY TEST 3 DEPLOYED---------\n" << std::endl;

		ISpaceMarine *bob = new TacticalMarine;
		ISpaceMarine *jim = new AssaultTerminator;
		Squad *vlc = new Squad;
		vlc->push(bob);
		vlc->push(jim);

		Squad *vlc2 = new Squad;
		vlc2->push(new TacticalMarine);
		vlc2->push(new TacticalMarine);

		*vlc = *vlc2;
		for (int i = 0; i < vlc->getCount(); ++i) {
			ISpaceMarine *cur = vlc->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
		delete vlc;
	}
	return 0;
}
