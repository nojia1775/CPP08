#include "easyfind.hpp"

template <typename T>
typename T::iterator	easyfind(const T& tab, const int& n)
{
	typename T::iterator it = std::find(tab.begin(), tab.end(), n);
	if (it == tab.end())
		throw NotInArray();
	return it;
}