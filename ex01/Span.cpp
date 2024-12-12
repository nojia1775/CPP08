#include "Span.hpp"

Span::Span(void) : _size(0)
{
	std::cout << "Span default constructor called\n";
}

Span::Span(unsigned int& n) : _size(n)
{
	std::cout << "Span constructor called\n";
}

Span::Span(const Span& other) : _size(other._size)
{
	for (std::vector<int>::iterator it = other._array.begin() ; it != other._array.end() ; ++it)
		_array.push_back(*it);
}