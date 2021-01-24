#include "Indentify.hpp"
#include <iostream>
int main() {
	std::srand(std::time(0));
	Indentify indentify;
	Base *b;

	b = indentify.generate();
	indentify.identify_from_pointer(b);
	indentify.identify_from_reference(*b);
	std::cout << "\n"
			  << std::endl;

	b = indentify.generate();
	indentify.identify_from_pointer(b);
	indentify.identify_from_reference(*b);
	std::cout << "\n"
			  << std::endl;

	b = indentify.generate();
	indentify.identify_from_pointer(b);
	indentify.identify_from_reference(*b);
	std::cout << "\n"
			  << std::endl;

	b = indentify.generate();
	indentify.identify_from_pointer(b);
	indentify.identify_from_reference(*b);
	std::cout << "\n"
			  << std::endl;

	b = indentify.generate();
	indentify.identify_from_pointer(b);
	indentify.identify_from_reference(*b);
	std::cout << "\n"
			  << std::endl;
	return 0;
}
