#include "Span.hpp"

int	main(void)
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	try
	{
		sp.addNumber(6);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << "\n";
	}
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	Span other(10);
	try
	{
		other.fillSpan(sp.getBegin(), sp.getEnd(), 10);
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << "\n";
	}
	std::cout << "size = " << other.getSize() << "\n";
	std::cout << other.shortestSpan() << std::endl;
	std::cout << other.longestSpan() << std::endl;
	return 0;
}