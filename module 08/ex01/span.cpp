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

}

void Span::addNumber(int newEl) {
	std::vector<int>::iterator i;
	i = std::find(arr.begin(), arr.end(), newEl);
	if (i != arr.end())
		throw AlreadyExistEception();
	else
		arr.insert(i, newEl);
}

int Span::shortestSpan() {
	int shortest;
	int i = 0;
	std::sort(arr.begin(), arr.end());
	shortest = arr.at(i + 1) - arr.at(i);
	do {
		if ((arr.at(i + 1) - arr.at(i )) < shortest)
					shortest = arr.at(i + 1) - arr.at(i);
		i++;
	} while (arr.at(i) !=  arr.at(i + 1) && i + 2 < arr.size());
	return shortest;
}

int Span::longestSpan() {
	std::sort(arr.begin(), arr.end());
	return arr.at(arr.size() - 1) - arr.at(0);
}

Span::~Span() {
}
