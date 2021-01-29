//
// Created by Lonmouth Mallador on 1/24/21.
//

#include "span.hpp"

class AlreadyExistEception : public std::exception {
public:
	virtual char const *what() const throw() {
		return "Element already exist!";
	}
};


Span::Span(unsigned int n) {
	(void) n;
	arr = new std::vector<int>;
}

Span::Span(Span &span) {
	*this = span;
}

Span &Span::operator=(const Span &span) {
	if (this == &span) {
		return *this;
	}
	delete arr;
	arr = new std::vector<int>(span.getArr()->size());
	for (int i = 0; i < (int) span.getArr()->size(); i++) {
		int x = span.getArr()->at(i);
		arr->push_back(x);
	}
	return *this;
}

void Span::addNumber(int newEl) {
	std::vector<int>::iterator i;
	i = std::find(arr->begin(), arr->end(), newEl);
	if (i != arr->end())
		throw AlreadyExistEception();
	else
		arr->insert(i, newEl);
}

void Span::betterAddNumber(int range) {
	for (int i = 0; i < range; i++)
		arr->push_back(i);
}

int Span::shortestSpan() {
	int shortest;
	int i = 0;
	std::sort(arr->begin(), arr->end());
	shortest = arr->at(i + 1) - arr->at(i);
	do {
		if ((arr->at(i + 1) - arr->at(i)) < shortest)
			shortest = arr->at(i + 1) - arr->at(i);
		i++;
	} while (arr->at(i) != arr->at(i + 1) && i + 2 < (int) arr->size());
	return shortest;
}

int Span::longestSpan() {
	std::sort(arr->begin(), arr->end());
	return arr->at(arr->size() - 1) - arr->at(0);
}

Span::~Span() {
}

std::vector<int> *Span::getArr() const {
	return arr;
}

Span::Span() {}
