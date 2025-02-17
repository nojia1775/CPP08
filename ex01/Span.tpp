#ifndef SPAN_TPP

# define SPAN_TPP

# include "Span.hpp"

template <typename T>
void	Span::fill(const typename T::const_iterator begin, const typename T::const_iterator end)
{
	if (std::distance(begin, end) > _size)
	{
		throw NotEnoughSpaceInArray();
		return;
	}
	_tab.assign(begin, end);
}

#endif