#include <iostream>
#include "iter.hpp"


void forInt(int const &x)
{
	std::cout << x << std::endl;
}

void forString(std::string const &x)
{
	std::cout << x << std::endl;
}


int main() {
	int *arr = new int[5];
	for (int i = 0; i < 5; i++)
		arr[i] = i;
	iter(arr, 5, forInt);
	std::string *arrs = new std::string[5];
	for (int i = 0; i < 5; i++)
		arrs[i] = ("String " + std::to_string(i));
	iter(arrs, 5, forString);
	return 0;
}
