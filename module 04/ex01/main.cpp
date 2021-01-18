#include "AWeapon.hpp"

#include "PlasmaRifle.hpp"
#include "PowerFirst.hpp"
#include "Ak_47.hpp"
#include "GrenadeLauncher.hpp"
#include "Enemy.hpp"
#include "Godzilla.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "Beggar.hpp"

int main() {

	AWeapon *pr = new PlasmaRifle();
	AWeapon *pf = new PowerFirst();
	AWeapon *ak47 = new Ak_47();
	AWeapon *gl = new GrenadeLauncher();

	Enemy *superMutant = new RadScorpion();

	pr->attack();
	pf->attack();
	ak47->attack();
	gl->attack();
	superMutant->takeDamage(-20);
	superMutant->takeDamage(50);
	superMutant->takeDamage(200);
	return 0;
}
