//
// Created by Lonmouth Mallador on 1/20/21.
//

#include "Form.hpp"
Form::Form(const std::string &name, const int signGrade,
		   const int executeGrade) : name(name), isSigned(false),
									 signGrade(signGrade), executeGrade(executeGrade) {
	if (signGrade > 150 || executeGrade > 150)
		throw GradeTooLowException();
	if (signGrade < 1 || executeGrade < 1)
		throw GradeTooHighException();
}

char const *Form::GradeTooLowException::what() const throw() {
	return "Form: grade too low!";
}
char const *Form::GradeTooHighException::what() const throw() {
	return "Form: grade too high!";
}

std::ostream &operator<<(std::ostream &os, const Form &form) {
	if (form.getIsSigned())
		os << "Signed form " + form.getName() + ", sign grade " + std::to_string(form.getSignGrade()) + ", execute grade " + std::to_string(form.getExecuteGrade()) << std::endl;
	else
		os << "Unsigned form " + form.getName() + ", sign grade " + std::to_string(form.getSignGrade()) + ", execute grade " + std::to_string(form.getExecuteGrade()) << std::endl;
	return os;
}


const std::string &Form::getName() const {
	return name;
}
bool Form::getIsSigned() const {
	return isSigned;
}
int Form::getSignGrade() const {
	return signGrade;
}
int Form::getExecuteGrade() const {
	return executeGrade;
}

void Form::beSigned(Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() > signGrade)
		throw GradeTooLowException();
	else
		isSigned = true;
}

Form::~Form() {
}