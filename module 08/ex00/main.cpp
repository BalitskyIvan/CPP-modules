#include <iostream>
#include "easyfind.hpp"
int main() {
	int x[5] = {10, 20, 20, 40, 50};
	std::vector<int>v;
	v.push_back(5);
	v.push_back(4);
	v.push_back(3);
	std::cout << *easyfind(v, 3) << std::endl;
	return 0;
}
