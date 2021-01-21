
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
	std::srand(std::time(0));

	{
		PresidentialPardonForm presidentialPardonForm("Pressidential");
		RobotomyRequestForm robotomyRequestForm("Robotomy");

		std::cout << presidentialPardonForm << std::endl;
		std::cout << robotomyRequestForm << std::endl;

		Bureaucrat king("KING", 26);

		std::cout << king << std::endl;

		king.executeForm(presidentialPardonForm);
		king.signForm(presidentialPardonForm);
		king.increment();
		king.signForm(presidentialPardonForm);
		king.executeForm(presidentialPardonForm);
		for (int i = 0; i < 20; i++)
			king.increment();
		king.executeForm(presidentialPardonForm);
		std::cout << presidentialPardonForm << std::endl;
		std::cout << king << std::endl;
	}
	{
		ShrubberyCreationForm shrubberyCreationForm("Constitution");
		std::cout << shrubberyCreationForm << std::endl;
		Bureaucrat waiter("Mike", 146);
		std::cout << waiter << std::endl;
		waiter.executeForm(shrubberyCreationForm);
		waiter.signForm(shrubberyCreationForm);
		waiter.increment();
		waiter.signForm(shrubberyCreationForm);
		waiter.executeForm(shrubberyCreationForm);
		for (int i = 0; i < 20; i++)
			waiter.increment();
		waiter.executeForm(shrubberyCreationForm);

		std::cout << shrubberyCreationForm << std::endl;
		std::cout << waiter << std::endl;
	}
	{
		RobotomyRequestForm robotomyRequestForm1("Robot1");
		RobotomyRequestForm robotomyRequestForm2("Robot2");
		RobotomyRequestForm robotomyRequestForm3("Robot3");

		std::cout << robotomyRequestForm1 << std::endl;
		std::cout << robotomyRequestForm2 << std::endl;
		std::cout << robotomyRequestForm3 << std::endl;

		Bureaucrat bender("Bender", 73);
		std::cout << bender << std::endl;

		bender.signForm(robotomyRequestForm1);
		bender.increment();

		while (!robotomyRequestForm1.getIsSigned())
			bender.signForm(robotomyRequestForm1);
		while (!robotomyRequestForm2.getIsSigned())
			bender.signForm(robotomyRequestForm2);
		while (!robotomyRequestForm3.getIsSigned())
			bender.signForm(robotomyRequestForm3);

		bender.executeForm(robotomyRequestForm1);
		for (int i = 0; i < 30; i++)
			bender.increment();
		std::cout << bender << std::endl;
		bender.executeForm(robotomyRequestForm1);
		bender.executeForm(robotomyRequestForm2);
		bender.executeForm(robotomyRequestForm3);

		std::cout << robotomyRequestForm1 << std::endl;
		std::cout << robotomyRequestForm2 << std::endl;
		std::cout << robotomyRequestForm3 << std::endl;
		std::cout << bender << std::endl;
	}
	return 0;
}
