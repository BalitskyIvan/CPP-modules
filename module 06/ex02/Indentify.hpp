//
// Created by Lonmouth Mallador on 1/24/21.
//

#ifndef EX02_INDENTIFY_HPP
#define EX02_INDENTIFY_HPP

#include "Base.cpp"
#include <iostream>

class Indentify {
public:
	Indentify();
	Base *generate(void);
	void identify_from_pointer(Base * p);
	void identify_from_reference( Base & p);
	virtual ~Indentify();
};


#endif//EX02_INDENTIFY_HPP
