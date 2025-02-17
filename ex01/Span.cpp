#include "Span.hpp"

Span::Span(void) : _size(0) {}

Span::~Span(void) {}

Span::Span(const unsigned int& number) : _size(number) {}

Span::Span(const Span& other) : _size(other._size), _tab(other._tab) {}

Span&	Span::operator=(const Span& other)
{
	if (this != &other)
	{
		_size = other._size;
		_tab = other._tab;
	}
	return *this;
}

void	Span::addNumber(const int& number)
{
	if (_tab.size() == _size)
	{
		throw TabIsFull();
		return;
	}
	_tab.push_back(number);
}

unsigned int	Span::shortestSpan(void) const
{
	if (_tab.size() < 2)
	{
		throw NotEnoughNumbers();
		return -1;
	}
	std::vector<int> tmp = _tab;
	std::sort(tmp.begin(), tmp.end());
	unsigned int shortest = std::abs(tmp[0] - tmp[1]);
	for (size_t i = 0 ; i < tmp.size() - 1 ; i++)
	{
		unsigned int diff = std::abs(tmp[i] - tmp[i + 1]);
		if (diff < shortest)
			shortest = diff;
	}
	return shortest;
}

unsigned int	Span::longestSpan(void) const
{
	if (_tab.size() < 2)
	{
		throw NotEnoughNumbers();
		return -1;
	}
	int min = *std::min_element(_tab.begin(), _tab.end());
	int max = *std::max_element(_tab.begin(), _tab.end());
	return std::abs(min - max);
}

void	Span::display(void) const
{
	for (std::vector<int>::const_iterator it = _tab.begin() ; it != _tab.end() ; ++it)
		std::cout << *it << "\n";
}

const char	*Span::TabIsFull::what(void) const throw() { return "The array is full"; }

const char	*Span::NotEnoughNumbers::what(void) const throw() { return "There is not enough numbers in the array"; }

const char	*Span::NotEnoughSpaceInArray::what(void) const throw() { return "Not enough space in the array"; }