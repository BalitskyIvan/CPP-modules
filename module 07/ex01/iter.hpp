//
// Created by Lonmouth Mallador on 1/24/21.
//

#ifndef EX01_ITER_HPP
#define EX01_ITER_HPP

template<typename T>
void iter(T *array, int length, void (*func) (T const &)) {
	for (int i = 0; i < length; i++)
		func(array[i]);
}

#endif//EX01_ITER_HPP
