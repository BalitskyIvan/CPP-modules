#include "easyfind.hpp"
#include <iostream>

int main() {
	{
		std::vector<int> v;
		for (int i = 0; i < 10000; i++)
			v.push_back(i);
		std::cout << *easyfind(v, 7654) << std::endl;
	}
	{
		std::vector<int> v;
		for (int i = 0; i < 10000; i++)
			v.push_back(i);
		try {
			std::cout << *easyfind(v, 10001) << std::endl;
		} catch (std::exception &e) {
			std::cout << "Error: " << e.what() << std::endl;
		}
		try {
			std::cout << *easyfind(v, 0) << std::endl;
		} catch (std::exception &e) {
			std::cout << "Error: " << e.what() << std::endl;
		}
		try {
			std::cout << *easyfind(v, -1) << std::endl;
		} catch (std::exception &e) {
			std::cout << "Error: " << e.what() << std::endl;
		}
	}
	return 0;
}
