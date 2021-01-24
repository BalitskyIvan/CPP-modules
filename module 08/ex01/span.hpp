//
// Created by Lonmouth Mallador on 1/24/21.
//

#ifndef EX01_SPAN_HPP
#define EX01_SPAN_HPP

#include <algorithm>
#include <iostream>
#include <vector>

class Span {
private:
	std::vector<int> arr;

public:
	Span(unsigned int n);
	void addNumber(int newEl);
	int shortestSpan();
	int longestSpan();
	virtual ~Span();
};


#endif//EX01_SPAN_HPP
