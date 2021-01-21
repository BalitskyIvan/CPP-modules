//
// Created by Lonmouth Mallador on 1/20/21.
//

#include "Form.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name) {
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade = grade;
}

const std::string &Bureaucrat::getName() const {
	return name;
}

int Bureaucrat::getGrade() const {
	return grade;
}

void Bureaucrat::increment() {
	if (grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	grade--;
}

void Bureaucrat::decrement() {
	if (grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	grade++;
}


std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat) {
	os << bureaucrat.getName() + ", bureaucrat grade " + std::to_string(bureaucrat.getGrade()) << std::endl;
	return os;
}

char const *Bureaucrat::GradeTooHighException::what() const throw() {
	return "\nGRADE TOO HIGH!!!\n";
}
char const *Bureaucrat::GradeTooLowException::what() const throw() {
	return "\nGRADE TOO LOW!!!\n";
}

void Bureaucrat::signForm(Form &form) {
	if (form.getIsSigned()) {
		std::cout << getName() + " cannot sign " + form.getName() + " because form is already signed!" << std::endl;
		return;
	}
	try {
		form.beSigned(*this);
	} catch (std::exception &e) {
		std::cout << getName() + " cannot sign " + form.getName() + " because " + e.what() << std::endl;
	}
	if (form.getIsSigned())
		std::cout << getName() + " sings " + form.getName() << std::endl;
}

Bureaucrat::~Bureaucrat() {
}
