//
// Created by Lonmouth Mallador on 1/24/21.
//

#include "Indentify.hpp"

Indentify::Indentify() {}

Indentify::~Indentify() {
}
Base *Indentify::generate(void) {
	Base *b;

	switch (std::rand() % 3) {
		case 0:
			b = new A;
			break;
		case 1:
			b = new B;
			break;
		case 2:
			b = new C;
			break;
	}
	return b;
}

void Indentify::identify_from_pointer(Base *p) {
	try {
		B *b = dynamic_cast<B *>(p);
		if (b != NULL)
			std::cout << "this is B" << std::endl;
	} catch (std::exception &e) {
	}
	try {
		A *a = dynamic_cast<A *>(p);
		if (a != NULL)
			std::cout << "this is A" << std::endl;
	} catch (std::exception &e) {
	}
	try {
		C *c = dynamic_cast<C *>(p);
		if (c != NULL)
			std::cout << "this is C" << std::endl;
	} catch (std::exception &e) {
	}
}

void Indentify::identify_from_reference(Base &p) {
	try {
		B *b = dynamic_cast<B *>(&p);
		if (b != NULL)
			std::cout << "this is B" << std::endl;
	} catch (std::exception &e) {
	}
	try {
		A *a = dynamic_cast<A *>(&p);
		if (a != NULL)
			std::cout << "this is A" << std::endl;
	} catch (std::exception &e) {
	}
	try {
		C *c = dynamic_cast<C *>(&p);
		if (c != NULL)
			std::cout << "this is C" << std::endl;
	} catch (std::exception &e) {
	}
}
