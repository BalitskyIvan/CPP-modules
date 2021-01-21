//
// Created by Lonmouth Mallador on 1/20/21.
//

#ifndef EX01_FORM_HPP
#define EX01_FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;
class Form {
private:
	const std::string name;
	bool isSigned;
	const int signGrade;
	const int executeGrade;

public:
	Form(const std::string &name, const int signGrade, const int executeGrade);
	const std::string &getName() const;
	int getSignGrade() const;
	int getExecuteGrade() const;
	virtual bool beSigned(Bureaucrat &bureaucrat);
	virtual void execute(Bureaucrat const & executor) const;
	class GradeTooHighException : public std::exception {
	public:
		virtual char const *what() const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		virtual char const *what() const throw();
	};
	class FormUnsigned : public std::exception {
	public:
		virtual char const *what() const throw();
	};
	virtual ~Form();

	virtual bool getIsSigned() const;
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif//EX01_FORM_HPP
