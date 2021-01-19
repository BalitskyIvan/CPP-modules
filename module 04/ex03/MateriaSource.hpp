//
// Created by Lonmouth Mallador on 1/19/21.
//

#ifndef EX03_MATERIASOURCE_HPP
#define EX03_MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
private:
	static const int maxSize = 4;
	AMateria *invent[maxSize];

public:
	MateriaSource();
	MateriaSource(const MateriaSource &materiaSource);
	virtual ~MateriaSource();
	void learnMateria(AMateria *materia);
	MateriaSource &operator=(const MateriaSource &materiaSource);
	AMateria *createMateria(const std::string &type);
	AMateria *getInvent(int i) const;
};


#endif//EX03_MATERIASOURCE_HPP
