
#include "Form.hpp"

int main() {
	try {
		Form form("Сonstitution", 1, 0);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Form form("Сonstitution", 151, 1);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	Form form("Сonstitution", 1, 150);
	Bureaucrat bureaucrat("King", 4);

	std::cout << form << std::endl;

	try {
		while (!form.getIsSigned()) {
			bureaucrat.signForm(form);
			bureaucrat.increment();
		}
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << bureaucrat << std::endl;
	try {
		bureaucrat.signForm(form);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << form << std::endl;
	std::cout << bureaucrat << std::endl;

	Form form2("Bill", 100, 150);
	Bureaucrat bureaucrat2("Waiter", 101);
	std::cout << form2 << std::endl;

	try {
		form2.beSigned(bureaucrat2);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << form2 << std::endl;

	bureaucrat2.increment();
	try {
		form2.beSigned(bureaucrat2);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << form2 << std::endl;

	return 0;
}
