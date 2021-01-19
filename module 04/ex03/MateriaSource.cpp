//
// Created by Lonmouth Mallador on 1/19/21.
//

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < maxSize; i++)
		invent[i] = NULL;
}
AMateria *MateriaSource::getInvent(int i) const {
	if (i < maxSize && i >= 0)
		return invent[i];
	return NULL;
}
MateriaSource::MateriaSource(const MateriaSource &materiaSource) {
	*this = materiaSource;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &materiaSource) {
	if (this == &materiaSource) {
		return *this;
	}
	for (int i = 0; i < maxSize; i++)
		delete invent[i];
	for (int i = 0; i < maxSize; i++)
		invent[i] = materiaSource.getInvent(i)->clone();
	return *this;
}

void MateriaSource::learnMateria(AMateria *materia) {
	for (int i = 0; i < maxSize; i++)
		if (!invent[i]) {
			invent[i] = materia->clone();
			break;
		}
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < maxSize; i++)
		if (invent[i] && invent[i]->getType() == type) {
			return invent[i]->clone();
		}
	return NULL;
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < maxSize; i++)
		invent[i] = NULL;
}
