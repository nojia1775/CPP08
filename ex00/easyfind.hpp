#ifndef EASYFIND_HPP

# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>

template <typename T>
void	easyfind(const T& tab, const int& n);

class	NotInArray : public std::exception
{
	const char	*what(void) const throw()
	{
		return "Input is not in the array";
	}
};

# include "easyfind.tpp"

#endif