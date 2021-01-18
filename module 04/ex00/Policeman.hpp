//
// Created by Lonmouth Mallador on 1/18/21.
//

#ifndef EX00_POLICEMAN_HPP
#define EX00_POLICEMAN_HPP

#include "Victim.hpp"

class Policeman : public Victim {
public:
	Policeman(const std::string &name);
	Policeman(const Victim &victim);
	virtual void getPolymorphed() const;
	virtual ~Policeman();
};


#endif//EX00_POLICEMAN_HPP
