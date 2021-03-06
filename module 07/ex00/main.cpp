#include "whatever.hpp"
#include <iostream>

class Test
{
private:
	double val;

public:
	Test(double val) : val(val) {
	}
	double getVal() const {
		return val;
	}
	Test &operator= (const Test &t)
	{
		this->val = t.getVal();
		return *this;
	}
};

std::ostream &operator<<(std::ostream &os, const Test &test) {
	os << test.getVal();
	return os;
}

bool operator<(const Test &test1, const Test &test2) {
	return test1.getVal() < test2.getVal();
}

int main() {
	{
		std::cout << "------STANDART TESTS------" << std::endl;

		int a = 2;
		int b = 3;
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
		std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
		std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
	}
	{
		std::cout << "\n------MY TESTS------\n" << std::endl;


		Test a(2.8);
		Test b(2.9);
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
		std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
		std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
	}
	return 0;
}
