//
// Created by Lonmouth Mallador on 1/24/21.
//

#ifndef EX02_TEST_HPP
#define EX02_TEST_HPP
#include <iostream>

class Test {
private:
	double val;

public:
	Test(double val) : val(val) {}
	Test() {
	}
	double getVal() const {
		return val;
	}
	Test &operator=(double &t) {
		this->val = t;
		return *this;
	}
};


std::ostream &operator<<(std::ostream &os, const Test &test) {
	os << test.getVal();
	return os;
}

#endif//EX02_TEST_HPP
