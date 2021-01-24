//
// Created by Lonmouth Mallador on 1/24/21.
//

#ifndef EX00_EASYFIND_HPP
#define EX00_EASYFIND_HPP

template<typename T>
void iter(T *array, int length, void (*func) (T const &)) {
	for (int i = 0; i < length; i++)
		func(array[i]);
}

#endif//EX00_EASYFIND_HPP
