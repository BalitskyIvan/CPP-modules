#include "mutantstack.hpp"

int main() {
	{
		std::cout << "\n--------------DEFAULT TEST--------------\n"
				  << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite) {
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	{
		std::cout << "\n--------------MY TEST 1--------------\n"
				  << std::endl;
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite) {
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(mstack);
	}
	{
		std::cout << "\n--------------MY TEST 2--------------\n"
				  << std::endl;
		std::list<int> mstack, mstack2;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << mstack.size() << std::endl;
		std::cout << mstack2.size() << std::endl;
		std::cout << mstack.back() << std::endl;
		mstack2 = mstack;
		std::cout << mstack.size() << std::endl;
		std::cout << mstack2.size() << std::endl;
		std::cout << mstack2.back() << std::endl;
		std::cout << "\n"
				  << std::endl;
		MutantStack<int> stack, stack2;
		stack.push(5);
		stack.push(17);
		std::cout << stack.size() << std::endl;
		std::cout << stack2.size() << std::endl;
		std::cout << stack.top() << std::endl;
		stack2 = stack;
		std::cout << stack.size() << std::endl;
		std::cout << stack2.size() << std::endl;
		std::cout << stack2.top() << std::endl;
	}
	{
		std::cout << "\n--------------MY TEST 3--------------\n"
				  << std::endl;
		MutantStack<int> mstack, mstack2;
		mstack.push(5);
		mstack.push(17);
		mstack.push(25);
		mstack.push(17);
		mstack.push(17);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator it2 = mstack.begin()++;
		MutantStack<int>::iterator ite = mstack.end();

		while (it2 != ite) {
			if (it < it2)
				std::cout << "true " << *it << " < " << *it2
						  << std::endl;
			else
				std::cout << "false " << *it << " < " << *it2
						  << std::endl;
			if (it <= it2)
				std::cout << "true " << *it << " <= " << *it2
						  << std::endl;
			else
				std::cout << "false " << *it << " <= " << *it2
						  << std::endl;
			if (it > it2)
				std::cout << "true " << *it << " > " << *it2
						  << std::endl;
			else
				std::cout << "false " << *it << " > " << *it2
						  << std::endl;
			if (it >= it2)
				std::cout << "true " << *it << " >= " << *it2
						  << std::endl;
			else
				std::cout << "false " << *it << " >= " << *it2
						  << std::endl;
			it2++;
			it++;
		}
	}
	return 0;
}
