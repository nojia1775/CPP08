#include "MutantStack.hpp"
template <typename T>
MutantStack<T>::MutantStack(void) : stack() {}

template <typename T>
MutantStack<T>::~MutantStack(void) {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& other) : stack(other) {}

template <typename T>
MutantStack<T>&	MutantStack<T>::operator=(const MutantStack& other)
{
	if (this != other)
		*this = other;
	return *this;
}