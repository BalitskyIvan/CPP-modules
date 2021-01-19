#include "AWeapon.hpp"

#include "Ak_47.hpp"
#include "Beggar.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "Godzilla.hpp"
#include "GrenadeLauncher.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main() {

	{
		std::cout << "---------STANDART TESTS DEPLOYED---------\n"
				  << std::endl;

		Character *me = new Character("me");
		std::cout << *me;
		Enemy *b = new RadScorpion();
		AWeapon *pr = new PlasmaRifle();
		AWeapon *pf = new PowerFist();
		me->equip(pr);
		std::cout << *me;
		me->equip(pf);
		me->attack(b);
		std::cout << *me;
		me->equip(pr);
		std::cout << *me;
		me->attack(b);
		std::cout << *me;
		me->attack(b);
		std::cout << *me;

		delete pr;
		delete pf;
		delete me;
	}
	{
		std::cout << "\n---------MY TESTS DEPLOYED---------\n"
				  << std::endl;

		Character *terminator = new Character("Terminator");
		AWeapon *gr = new GrenadeLauncher();
		AWeapon *ak47 = new Ak_47();

		std::cout << *terminator;

		Enemy *godzilla = new Godzilla();

		terminator->attack(godzilla);
		terminator->attack(godzilla);
		std::cout << *terminator;
		terminator->equip(gr);
		terminator->attack(godzilla);
		terminator->attack(godzilla);
		terminator->attack(godzilla);
		terminator->attack(godzilla);

		std::cout << *terminator;

		Enemy *sm = new SuperMutant();

		terminator->equip(ak47);

		terminator->attack(sm);
		std::cout << *terminator;
		terminator->recoverAP();
		terminator->attack(sm);
		terminator->attack(sm);
		std::cout << *terminator;
		terminator->recoverAP();
		terminator->recoverAP();
		terminator->attack(sm);
		terminator->attack(sm);
        terminator->recoverAP();
        terminator->recoverAP();
        terminator->attack(sm);
        terminator->attack(sm);
        terminator->attack(sm);
        terminator->attack(sm);
        terminator->recoverAP();
        terminator->recoverAP();
		terminator->equip(gr);
        terminator->attack(sm);
        terminator->attack(sm);
        terminator->attack(sm);
        terminator->attack(sm);
        terminator->recoverAP();
        terminator->recoverAP();
        terminator->attack(sm);
        terminator->attack(sm);
        terminator->attack(sm);

		std::cout << *terminator;

        terminator->recoverAP();
        terminator->recoverAP();
		terminator->recoverAP();
        terminator->recoverAP();
        terminator->recoverAP();
        terminator->recoverAP();

        std::cout << *terminator;

        Enemy *beggar = new Beggar();
		terminator->recoverAP();
		terminator->recoverAP();
		terminator->attack(beggar);

		delete terminator;
		delete gr;
		delete ak47;
	}
	return 0;
}
