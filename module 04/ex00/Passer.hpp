//
// Created by Lonmouth Mallador on 1/18/21.
//

#ifndef EX00_PASSER_HPP
#define EX00_PASSER_HPP

#include "Victim.hpp"

class Passer : public Victim {
public:
	Passer(const std::string &name);
	Passer(const Victim &victim);
	Passer &operator=(const Passer &victim);
	virtual void getPolymorphed() const;
	virtual ~Passer();
};


#endif//EX00_PASSER_HPP
