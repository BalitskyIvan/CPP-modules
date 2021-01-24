//
// Created by Lonmouth Mallador on 1/24/21.
//

#ifndef EX00_WHATEVER_HPP
#define EX00_WHATEVER_HPP

template<typename T>
void swap(T &arg1, T &arg2) {
	T copy = arg1;
	arg1 = arg2;
	arg2 = copy;
}


template<typename T>
T min(T &arg1, T &arg2) {
	if (arg1 < arg2)
		return arg1;
	else
		return arg2;
}

template<typename T>
T max(T &arg1, T &arg2) {
	if (arg2 < arg1)
		return arg1;
	else
		return arg2;
}
#endif//EX00_WHATEVER_HPP
