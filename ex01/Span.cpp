#include "Span.hpp"

Span::Span(void) : _size(0)
{
	std::cout << "Span default constructor called\n";
	_array = std::vector<int>();
}

Span::~Span(void)
{
	std::cout << "Span destructor called\n";
}

Span::Span(const unsigned int& n) : _size(n)
{
	std::cout << "Span constructor called\n";
}

Span::Span(const Span& other) : _size(other._size)
{
	std::cout << "Span copy constructor called\n";
	_array = other._array;
}

Span&	Span::operator=(const Span& other)
{
	if (this != &other)
	{
		_size = other._size;
		_array = other._array;
	}
	return *this;
}

void	Span::addNumber(const int& nbr)
{
	if (_array.size() == _size)
		throw SpanIsFull();
	else
		_array.push_back(nbr);
}

unsigned int	Span::longestSpan(void) const
{
	if (_size < 2)
	{
		throw NotEnoughNumber();
		return -1;
	}
	int min = *std::min_element(_array.begin(), _array.end());
	int max = *std::max_element(_array.begin(), _array.end());
	return max - min;
}

unsigned int	Span::shortestSpan(void) const
{
	if (_size < 2)
	{
		throw NotEnoughNumber();
		return -1;
	}
	std::vector<int> tmp = _array;
	std::sort(tmp.begin(), tmp.end());
	int diff = std::abs(tmp[0] - tmp[1]);
	for (unsigned int i = 0 ; i < _size - 1 ; i++)
	{
		if (std::abs(tmp[i] - tmp[i + 1]) < diff)
			diff = std::abs(tmp[i] - tmp[i + 1]);
	}
	return diff;
}

void	Span::fillSpan(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end, int value)
{
	for (std::vector<int>::const_iterator it = begin; it != end ; ++it)
		addNumber(value);
}

std::vector<int>::const_iterator	Span::getBegin(void) const
{
	return _array.begin();
}

std::vector<int>::const_iterator	Span::getEnd(void) const
{
	return _array.end();
}

const char	*Span::SpanIsFull::what(void) const throw()
{
	return "The span is full";
}

const char	*Span::IndexOutOfRange::what(void) const throw()
{
	return "Out of range";
}

const char	*Span::NotEnoughNumber::what(void) const throw()
{
	return "There is not enough number in span";
}