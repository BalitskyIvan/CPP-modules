//
// Created by Lonmouth Mallador on 1/20/21.
//

#ifndef EX02_ROBOTOMYREQUESTFORM_HPP
#define EX02_ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form {
public:
	Form *clone(std::string &name) const;
	RobotomyRequestForm(const std::string &name);
	virtual bool beSigned(Bureaucrat &bureaucrat);
	virtual ~RobotomyRequestForm();
};

#endif//EX02_ROBOTOMYREQUESTFORM_HPP
