//
// Created by Lonmouth Mallador on 1/20/21.
//

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string &name) : Form(name, 72, 45) {}

bool RobotomyRequestForm::beSigned(Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > getSignGrade())
		throw GradeTooLowException();
	else if (!getIsSigned())
	{
		if (std::rand() % 2 == 1)
		{
			std::cout << getName() + "  has been robotomized successfully" << std::endl;
			Form::beSigned(bureaucrat);
			return true;
		} else
			std::cout << getName() + " wasn't robotomized :(" << std::endl;
	}
	return false;
}

RobotomyRequestForm::~RobotomyRequestForm() {
}
