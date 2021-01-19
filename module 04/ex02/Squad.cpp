//
// Created by Lonmouth Mallador on 1/19/21.
//

#include "Squad.hpp"

Squad::Squad() : count(0), squad(NULL) {}

static void copyNewSquad(const ISquad &old, ISpaceMarine **newS, int count) {
	for (int i = 0; i < count; i++) {
		newS[i] = old.getUnit(i)->clone();
	}
}
static void copySquad(ISpaceMarine **old, ISpaceMarine **newS, int count) {
	for (int i = 0; i < count; i++) {
		newS[i] = old[i];
	}
}
static void deleteSquad(ISpaceMarine **squad, int count) {
	for (int i = 0; i < count; i++)
		delete squad[i];
	if (count > 0)
		delete squad;
}

static bool isExist(ISpaceMarine **squad, ISpaceMarine *marine, int count) {
	for (int i = 0; i < count; i++)
		if (squad[i] == marine)
			return true;
	return false;
}

Squad &Squad::operator=(const Squad &squad) {
	std::cout << "Assignation operator called" << std::endl;
	if (this == &squad) {
		return *this;
	}
	deleteSquad(this->squad, getCount());
	this->squad = new ISpaceMarine *[squad.getCount()];
	copyNewSquad(squad, this->squad, squad.getCount());
	this->count = squad.getCount();
	return *this;
}

Squad::Squad(const Squad &squad) {
	*this = squad;
}



int Squad::getCount() const {
	return this->count;
}

ISpaceMarine *Squad::getUnit(int i) const {
	if (i >= this->getCount())
		return NULL;
	else
		return (squad[i]);
}

int Squad::push(ISpaceMarine *marine) {

	if (marine == NULL || isExist(this->squad, marine, getCount()))
		return getCount();

	ISpaceMarine **newSquad = new ISpaceMarine *[count + 1];

	copySquad(this->squad, newSquad, this->count);
	newSquad[count] = marine;
	if (count > 0)
		delete squad;
	squad = newSquad;
	count++;
	return (count);
}

Squad::~Squad() {
	deleteSquad(this->squad, getCount());
}
