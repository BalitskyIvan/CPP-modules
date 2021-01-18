//
// Created by Lonmouth Mallador on 1/18/21.
//

#ifndef EX00_SORCERER_HPP
#define EX00_SORCERER_HPP

#include "Peon.hpp"
#include "Victim.hpp"

class Sorcerer {
private:
	std::string name;
	std::string title;
	Sorcerer();

public:
	Sorcerer(const std::string &name, const std::string &title);
	Sorcerer(const Sorcerer &sorcerer);
	Sorcerer &operator=(const Sorcerer &sorcerer);
	void polymorph(const Victim &) const;
	const std::string &getName() const;
	const std::string &getTitle() const;
	virtual ~Sorcerer();
};

std::ostream &operator<<(std::ostream &os, const Sorcerer &victim);

#endif//EX00_SORCERER_HPP
