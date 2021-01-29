#include "span.hpp"

int main() {
	{
		unsigned int n = 10000;
		Span sp(n);
		for (int i = 0; i < 10000; i++)
			sp.addNumber(i);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		try {
			sp.addNumber(111);
		} catch (std::exception &e) {
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
	{
		unsigned int n = 10000;
		Span sp(n);
		sp.betterAddNumber(n);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		try {
			sp.addNumber(5332);
		} catch (std::exception &e) {
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
	{
		Span sp(3);
		sp.addNumber(1000);
		sp.addNumber(500);
		sp.addNumber(847);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
}
