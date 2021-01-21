//
// Created by Lonmouth Mallador on 1/20/21.
//

#ifndef EX02_PRESIDENTIALPARDONFORM_HPP
#define EX02_PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form {
public:
	Form *clone(std::string &name) const;
	PresidentialPardonForm(const std::string &name);
	virtual bool beSigned(Bureaucrat &bureaucrat);
	virtual ~PresidentialPardonForm();
};


#endif//EX02_PRESIDENTIALPARDONFORM_HPP
