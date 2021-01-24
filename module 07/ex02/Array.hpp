//
// Created by Lonmouth Mallador on 1/24/21.
//

#ifndef EX02_ARRAY_HPP
#define EX02_ARRAY_HPP

#include "Test.hpp"
#include <iostream>

template<class T>
class Array {
private:
	int size;
	T *arr;

public:
	Array() {
		arr = new T;
		size = 0;
	}
	Array(unsigned int n) {
		arr = new T[n];
		size = n;
	}
	Array(Array const &r) {
		*this = r;
	}
	virtual ~Array() {
		delete arr;
	}
	class IndexOfBoundsException : public std::exception {
	public:
		virtual char const *what() const throw() {
			return "Array out of bound!";
		}
	};

	T &operator[](int &x) {
		if (x >= size || x < 0)
			throw Array::IndexOfBoundsException();
		else
			return arr[x];
	}

	Array &operator=(const Array &array) {
		if (this == &array) {
			return *this;
		}
		delete arr;
		arr = new T[array.getSize()];
		for (int i = 0; i < array.getSize(); i++)
			arr[i] = array.arr[i];
		return *this;
	}

	int getSize() const {
		return size;
	}
};

#endif//EX02_ARRAY_HPP
