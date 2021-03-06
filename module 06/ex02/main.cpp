#include "Base.cpp"
#include <iostream>

Base *generate(void) {
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

void identify_from_pointer(Base *p) {
	try {
		B *b = dynamic_cast<B *>(p);
		if (b != NULL)
			std::cout << "B" << std::endl;
	} catch (std::exception &e) {
	}
	try {
		A *a = dynamic_cast<A *>(p);
		if (a != NULL)
			std::cout << "A" << std::endl;
	} catch (std::exception &e) {
	}
	try {
		C *c = dynamic_cast<C *>(p);
		if (c != NULL)
			std::cout << "C" << std::endl;
	} catch (std::exception &e) {
	}
}

void identify_from_reference(Base &p) {
	try {
		B *b = dynamic_cast<B *>(&p);
		if (b != NULL)
			std::cout << "B" << std::endl;
	} catch (std::exception &e) {
	}
	try {
		A *a = dynamic_cast<A *>(&p);
		if (a != NULL)
			std::cout << "A" << std::endl;
	} catch (std::exception &e) {
	}
	try {
		C *c = dynamic_cast<C *>(&p);
		if (c != NULL)
			std::cout << "C" << std::endl;
	} catch (std::exception &e) {
	}
}

int main() {
	std::srand(std::time(0));
	Base *b;

	b = generate();
	identify_from_pointer(b);
	identify_from_reference(*b);
	std::cout << "\n"
			  << std::endl;

	b = generate();
	identify_from_pointer(b);
	identify_from_reference(*b);
	std::cout << "\n"
			  << std::endl;

	b = generate();
	identify_from_pointer(b);
	identify_from_reference(*b);
	std::cout << "\n"
			  << std::endl;

	b = generate();
	identify_from_pointer(b);
	identify_from_reference(*b);
	std::cout << "\n"
			  << std::endl;

	b = generate();
	identify_from_pointer(b);
	identify_from_reference(*b);
	std::cout << "\n"
			  << std::endl;
	return 0;
}
