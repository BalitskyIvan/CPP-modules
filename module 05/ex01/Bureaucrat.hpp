//
// Created by Lonmouth Mallador on 1/20/21.
//

#ifndef EX00_BUREAUCRAT_HPP
#define EX00_BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;
class Bureaucrat {
private:
	const std::string name;
	int grade;

public:
	Bureaucrat(std::string name, int grade);
	const std::string &getName() const;
	int getGrade() const;
	void increment();
	void decrement();
	void signForm(Form &form);
	class GradeTooHighException : public std::exception {
	public:
		virtual char const *what() const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		virtual char const *what() const throw();
	};
	virtual ~Bureaucrat();
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif//EX00_BUREAUCRAT_HPP
