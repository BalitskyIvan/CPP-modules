#include "AWeapon.hpp"

#include "PlasmaRifle.hpp"
#include "PowerFirst.hpp"
#include "Ak_47.hpp"
#include "GrenadeLauncher.hpp"

int main() {

	AWeapon *pr = new PlasmaRifle();
	AWeapon *pf = new PowerFirst();
	AWeapon *ak47 = new Ak_47();
	AWeapon *gl = new GrenadeLauncher();

	pr->attack();
	pf->attack();
	ak47->attack();
	gl->attack();
	return 0;
}
