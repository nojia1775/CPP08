#pragma once

#include <iostream>
#include <stack>

template <typename T>
class	MutantStack : public std::stack<T>
{
	public:
				typedef std::stack<T> stack;
				typedef typename stack::container_type container;
				typedef typename container::iterator iterator;

				MutantStack(void);
				~MutantStack(void);
				MutantStack(const MutantStack& other);
		MutantStack&	operator=(const MutantStack& other);

		iterator	begin(void) { return stack::c.begin(); }
		iterator	end(void) { return stack::c.end(); }
};

#include "MutantStack.tpp"