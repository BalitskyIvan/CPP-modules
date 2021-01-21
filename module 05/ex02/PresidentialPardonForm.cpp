//
// Created by Lonmouth Mallador on 1/20/21.
//

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &name) : Form(name, 25, 5) {}

bool PresidentialPardonForm::beSigned(Bureaucrat &bureaucrat) {
	if (Form::beSigned(bureaucrat)) {
		std::cout << getName() + " has been pardoned by Zafod Beeblebrox." << std::endl;
		return true;
	}
	return false;
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

