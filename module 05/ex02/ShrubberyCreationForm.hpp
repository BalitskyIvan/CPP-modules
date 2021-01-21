//
// Created by Lonmouth Mallador on 1/20/21.
//

#ifndef EX02_SHRUBBERYCREATIONFORM_HPP
#define EX02_SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <sstream>
#include <fstream>

class ShrubberyCreationForm : public Form {
public:
	ShrubberyCreationForm(const std::string &name);
	virtual bool beSigned(Bureaucrat &bureaucrat);
	virtual ~ShrubberyCreationForm();
};


#endif//EX02_SHRUBBERYCREATIONFORM_HPP
