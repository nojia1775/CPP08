#include "Span.hpp"

int	main(void)
{
	Span span(5);

	try
	{
		span.addNumber(1);
		span.addNumber(9);
		span.addNumber(-7);
		span.addNumber(-5);
		span.addNumber(6);
		std::cout << "shortest span : " << span.shortestSpan() << "\n";
		std::cout << "longest span : " << span.longestSpan() << "\n";
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << "\n";
	}
	Span big(10001);
	try
	{
		for (int i = 0 ; i < 10001 ; i++)
			big.addNumber(i);
		std::cout << "shortest span : " << big.shortestSpan() << "\n";
		std::cout << "longest span : " << big.longestSpan() << "\n";
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << "\n";
	}
	std::vector<int> vec(3);
	vec[0] = 5;
	vec[1] = 4;
	vec[2] = -8;
	std::list<int> list(4);
	list.push_back(1);
	list.push_back(2);
	list.push_back(3);
	list.push_back(4);
	Span filled(3);
	try
	{
		filled.fill< std::vector<int> >(vec.begin(), vec.end());
		filled.display();
		filled.fill< std::list<int> >(list.begin(), list.end());
		filled.display();
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << "\n";
	}
	return 0;
}