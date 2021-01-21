//
// Created by Lonmouth Mallador on 1/21/21.
//

#include "Intern.hpp"

Intern::Intern() {
	this->types[0] = "robotomy request";
	this->types[1] = "shrubbery creation";
	this->types[2] = "presidential pardon";
	this->forms[0] = new RobotomyRequestForm("Sample Text");
	this->forms[1] = new ShrubberyCreationForm("Sample Text");
	this->forms[2] = new PresidentialPardonForm("Sample Text");
}

Intern::Intern(const Intern &intern) {
	*this = intern;
}

Intern &Intern::operator=(const Intern &intern) {
	(void) intern;
	return *this;
}

Form *Intern::makeForm(std::string type, std::string name) {
	for (int i = 0; i < FORMS_NUM; i++)
		if (type == types[i]) {
			std::cout << "Intern creates " + name << std::endl;
			return forms[i]->clone(name);
		}
	std::cout << "Error: form " + type + " not found :(" << std::endl;
	return NULL;
}

Intern::~Intern() {
	for (int i = 0; i < FORMS_NUM; i++)
		delete forms[i];
}
