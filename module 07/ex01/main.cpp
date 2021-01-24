#include <iostream>
#include "iter.hpp"

void plus2(int const &x)
{
	std::cout << x << std::endl;
}

int main() {
	int *arr = new int[5];
	for (int i = 0; i < 5; i++)
		arr[i] = i;
	iter(arr, 5, plus2);
	return 0;
}
