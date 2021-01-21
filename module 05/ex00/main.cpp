
#include "Bureaucrat.hpp"

int main() {
	try {
		Bureaucrat bureaucrat("SERGEY", 0);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat bureaucrat("SERGEY", 151);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	Bureaucrat bureaucrat("SERGEY", 15);
	try {
		for (int i = 0; i < 17; i++)
			bureaucrat.increment();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << bureaucrat << std::endl;
	try {
		for (int i = 0; i < 1000; i++)
			bureaucrat.decrement();
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << bureaucrat << std::endl;

	return 0;
}
