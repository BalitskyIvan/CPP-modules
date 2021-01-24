//
// Created by Lonmouth Mallador on 1/24/21.
//

#ifndef EX00_EASYFIND_HPP
#define EX00_EASYFIND_HPP
#include<vector>
#include<algorithm>
#include <iostream>
#include<iterator>

class IndexOfBoundsException : public std::exception {
public:
	virtual char const *what() const throw() {
		return "Element does not exist!";
	}
};

template<typename T>
typename T::iterator easyfind(T &arr, int val) {
	typename T::iterator i;
	i = std::find(arr.begin(), arr.end(), val);
	if (i == arr.end())
		throw IndexOfBoundsException();
	return i;
}

#endif//EX00_EASYFIND_HPP
