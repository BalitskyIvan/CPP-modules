//
// Created by Lonmouth Mallador on 1/21/21.
//

#ifndef EX03_INTERN_HPP
#define EX03_INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


class Intern {
private:
	static const int FORMS_NUM = 3;
	Form *forms[FORMS_NUM];
	std::string types[FORMS_NUM];

public:
	Intern();
	Intern(const Intern &intern);
	Intern &operator=(const Intern &intern);
	Form *makeForm(std::string type, std::string name);
	virtual ~Intern();
};


#endif//EX03_INTERN_HPP
