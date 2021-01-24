#include "Array.hpp"


int main() {
	{
		std::cout << "\n--------------Test 1--------------\n"
				  << std::endl;

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
		std::cout << "\n"
				  << std::endl;
		for (int i = 0; i < 10; i++)
			std::cout << b[i] << std::endl;
	}
	{
		std::cout << "\n--------------Test 2--------------\n"
				  << std::endl;

		Array<Test> a(10);
		Array<Test> b(10);
		for (int i = 0; i < 10; i++)
			a[i] = 5.2342;
		for (int i = 0; i < 10; i++)
			b[i] = 6.1111;
		for (int i = 0; i < 10; i++)
			std::cout << a[i] << std::endl;
		std::cout << "\n"
				  << std::endl;
		a = b;
		for (int i = 0; i < 10; i++)
			std::cout << a[i] << std::endl;
		std::cout << "\n"
				  << std::endl;
		for (int i = 0; i < 10; i++)
			std::cout << b[i] << std::endl;
	}
	{
		std::cout << "\n--------------Test 3--------------\n"
				  << std::endl;

		Array<Test> a(10);
		Array<Test> b(10);
		for (int i = 0; i < 10; i++)
			a[i] = 5.2342;
		for (int i = 0; i < 10; i++)
			b[i] = 6.1111;
		for (int i = 0; i < 10; i++)
			std::cout << a[i] << std::endl;
		std::cout << "\n"
				  << std::endl;
		a = b;
		try {
			for (int i = 0; i < 11; i++)
				std::cout << "index: " << i << " " << a[i] << std::endl;
		} catch (std::exception &e) {
			std::cout << "Error : " << e.what() << std::endl;

		}
		std::cout << "\n"
				  << std::endl;
		try {
			for (int i = 0; i < 11; i++)
				std::cout << "index: " << i << " " << b[i] << std::endl;
		} catch (std::exception &e) {
			std::cout << "Error : " << e.what() << std::endl;

		}
	}
	return 0;
}
