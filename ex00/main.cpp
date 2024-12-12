#include "easyfind.hpp"
#include <map>
#include <list>

int	main(void)
{
	std::vector<int> arr;
	arr.push_back(1);
	arr.push_back(2);
	arr.push_back(3);
	try
	{
		std::vector<int>::iterator it = easyfind(arr, 1);
		std::cout << *it << "\n";
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << "\n";
	}
	std::list<int> lst;
	lst.push_back(5);
	lst.push_back(6);
	lst.push_back(7);
	try
	{
		std::list<int>::iterator it = easyfind(lst, 5);
		std::cout << *it << "\n";
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << "\n";
	}
	return 0;
}