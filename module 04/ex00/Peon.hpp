//
// Created by Lonmouth Mallador on 1/18/21.
//

#ifndef EX00_PEON_HPP
#define EX00_PEON_HPP

#include "Victim.hpp"

class Peon : public Victim {
public:
	Peon(const std::string &name);
	Peon(const Victim &victim);
	Peon &operator=(const Peon &peon);
	virtual void getPolymorphed() const;
	virtual ~Peon();
};


#endif//EX00_PEON_HPP
