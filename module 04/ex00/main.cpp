#include "Passer.hpp"
#include "Policeman.hpp"
#include "Sorcerer.hpp"

int main() {
	{
		std::cout << "---------STANDART TESTS DEPLOYED---------\n"
				  << std::endl;
		Sorcerer robert("Robert", "the Magnificent");
		Victim jim("Jimmy");
		Peon joe("Joe");
		std::cout << robert << jim << joe;
		robert.polymorph(jim);
		robert.polymorph(joe);
	}
	{
		std::cout << "\n---------MY TESTS DEPLOYED---------\n"
				  << std::endl;

		Sorcerer merlin("Merlin", "the Great");

		Victim sanya("SANYA");
		Peon nikita("NIKITA");
		Policeman semen("SEMEN");
		Passer mikhail("MIKHAIL");

		std::cout << sanya << nikita << semen << mikhail;

		merlin.polymorph(sanya);
		merlin.polymorph(nikita);
		merlin.polymorph(semen);
		merlin.polymorph(mikhail);
	}
	return 0;
}
