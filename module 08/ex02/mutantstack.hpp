//
// Created by Lonmouth Mallador on 1/24/21.
//

#ifndef EX02_MUTANTSTACK_HPP
#define EX02_MUTANTSTACK_HPP

#include <algorithm>
#include <iostream>
#include <list>
#include <stack>

template<class T>
class MutantStack : public std::stack<T> {

public:
	MutantStack() : std::stack<T>(){};
	MutantStack(const MutantStack<T> &stack1) : std::stack<T>(stack1){};
	MutantStack &operator=(MutantStack &mutantStack) {
		if (this == &mutantStack) {
			return *this;
		}
		for (int i = 0; i < (int) this->size(); i++)
			this->pop();
		iterator it = mutantStack.begin();
		iterator ite = mutantStack.end();
		while (it != ite) {
			this->push(*it);
			++it;
		}
		return *this;
	}
	class iterator : public std::iterator<std::bidirectional_iterator_tag, T> {
	private:
		T *t;

	public:
		iterator() : t(nullptr){};
		iterator(T *ptr) : t(ptr) {}
		~iterator(){};
		iterator &operator=(const iterator &iterator1) {
			if (this == &iterator1) {
				return *this;
			}
			*t = iterator1.getT();
			return *this;
		}
		T *getT() const {
			return t;
		}
		bool operator==(const iterator &iterator) {
			if (t == iterator.getT())
				return true;
			else
				return false;
		};
		bool operator!=(const iterator &iterator) {
			if (t != iterator.getT())
				return true;
			else
				return false;
		};
		bool operator<(const iterator &iterator) {
			if (*t < *iterator.getT())
				return true;
			else
				return false;
		};
		bool operator<=(const iterator &iterator) {
			if (*t <= *iterator.getT())
				return true;
			else
				return false;
		};
		bool operator>(const iterator &iterator) {
			if (*t > *iterator.getT())
				return true;
			else
				return false;
		};
		bool operator>=(const iterator &iterator) {
			if (*t >= *iterator.getT())
				return true;
			else
				return false;
		};
		iterator &operator++() {
			t++;
			return *this;
		}
		iterator &operator--() {
			t--;
			return *this;
		};
		iterator &operator++(int) {
			t++;
			return *this;
		};
		iterator &operator--(int) {
			t--;
			return *this;
		};

		T &operator*() const { return *this->t; }
	};

	iterator begin() { return (iterator(&this->top() - this->size() + 1)); };

	iterator end() { return (iterator(&this->top() + 1)); };

	virtual ~MutantStack();
};

template<class T>
MutantStack<T>::~MutantStack() {
}


#endif//EX02_MUTANTSTACK_HPP
