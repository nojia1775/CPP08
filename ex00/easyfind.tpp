#include "easyfind.hpp"

template <typename T>
void	easyfind(const T& tab, const int& n)
{
	if (std::find(tab.begin(), tab.end(), n) == tab.end())
		throw NotInArray();
	std::cout << "Found\n";
}