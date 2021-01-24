#include "Array.hpp"

int main() {
	Array<int> a(10);
	Array<int> b(10);
	for (int i = 0; i < 10; i++)
		a[i] = i;
	for (int i = 0; i < 10; i++)
		b[i] = 10 - i;
	a = b;
	for (int i = 0; i < 10; i++)
		a[i] = i;
	for (int i = 0; i < 10; i++)
		std::cout << a[i] << std::endl;
	std::cout << "\n" << std::endl;
	for (int i = 0; i < 10; i++)
		std::cout << b[i] << std::endl;
	return 0;
}
