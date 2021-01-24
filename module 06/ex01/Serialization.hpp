//
// Created by Lonmouth Mallador on 1/23/21.
//

#ifndef EX01_SERIALIZATION_HPP
#define EX01_SERIALIZATION_HPP

#include <iostream>

struct Data {
	std::string s1;
	int 		n;
	std::string s2;
};

class Serialization {
public:
	Serialization();
	void *serialize(void);
	Data * deserialize(void * raw);
	virtual ~Serialization();
};


#endif//EX01_SERIALIZATION_HPP
