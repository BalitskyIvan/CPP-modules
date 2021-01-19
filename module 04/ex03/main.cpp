#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Water.hpp"
#include "Fire.hpp"
#include "Character.hpp"

int main() {
	{
		std::cout << "---------STANDART TESTS DEPLOYED---------\n"
				  << std::endl;

		IMateriaSource *src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter *me = new Character("me");
		AMateria *tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter *bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}
	{
		std::cout << "\n---------MY TEST 1 DEPLOYED---------\n" << std::endl;
		IMateriaSource *src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Water());
		src->learnMateria(new Fire());
		src->learnMateria(NULL);

		ICharacter *me = new Character("SANYA");
		AMateria *tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter *bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		me->use(2, *bob);
		me->use(2, *bob);
		me->use(4, *bob);
		me->use(-504, *bob);
		me->equip(tmp);
		me->equip(tmp);
		me->equip(tmp);
		me->equip(tmp);
		me->equip(tmp);
		me->use(2, *bob);
		me->use(3, *bob);
		me->use(4, *bob);
		me->unequip(0);
		me->equip(src->createMateria("fire"));
		me->use(0, *bob);
		me->unequip(1);
		me->equip(src->createMateria("water"));
		std::cout << "\n" << std::endl;

		me->use(0, *bob);
		me->use(1, *bob);
		me->use(2, *bob);
		me->use(3, *bob);

		delete bob;
		delete me;
		delete src;
	}
	return 0;
}
