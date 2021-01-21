
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
int main() {
	{
		Intern someRandomIntern;
		Form *rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");

		delete rrf;
	}
	{
		Intern someRandomIntern;
		Bureaucrat president("President", 1);
		Form *rrf, *ppf, *scf;

		rrf = someRandomIntern.makeForm("robotomy reques", "Bender");
		rrf = someRandomIntern.makeForm("shrubbery creation1", "Bender");
		rrf = someRandomIntern.makeForm("presidentialpardon", "Bender");

		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		scf = someRandomIntern.makeForm("shrubbery creation", "The Gigant Tree");
		ppf = someRandomIntern.makeForm("presidential pardon", "AOUAUUA");

		std::cout << *rrf << std::endl;
		std::cout << *ppf << std::endl;
		std::cout << *scf << std::endl;

		president.signForm(*rrf);
		president.signForm(*ppf);
		president.signForm(*scf);

		std::cout << *rrf << std::endl;
		std::cout << *ppf << std::endl;
		std::cout << *scf << std::endl;

		delete rrf;
		delete ppf;
		delete scf;
	}
	return 0;
}
