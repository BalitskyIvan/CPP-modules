//
// Created by Lonmouth Mallador on 1/18/21.
//

#ifndef EX00_VICTIM_HPP
#define EX00_VICTIM_HPP

#include <iostream>

class Victim {
protected:
	std::string name;

private:
	Victim();

public:
	Victim(const std::string &name);
	Victim(const Victim &victim);
	Victim &operator=(const Victim &victim);
	virtual void getPolymorphed() const;
	const std::string &getName() const;
	virtual ~Victim();
};

std::ostream &operator<<(std::ostream &os, const Victim &victim);

#endif//EX00_VICTIM_HPP
