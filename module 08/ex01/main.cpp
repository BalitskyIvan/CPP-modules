#include "span.hpp"

int main() {
	Span sp = Span(10000);
//	sp.addNumber(5);
//	sp.addNumber(3);
//	sp.addNumber(17);
//	sp.addNumber(9);
//	sp.addNumber(11);
//	std::cout << sp.shortestSpan() << std::endl;
//	std::cout << sp.longestSpan() << std::endl;
	for(int i = 0; i < 9000; i++)
		sp.addNumber(i);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}
