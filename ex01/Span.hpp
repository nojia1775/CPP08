#ifndef SPAN_HPP

# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class	Span
{
	private:
		size_t					_size;
		std::vector<int>			_array;

	public:
							Span(void);
							~Span(void);

							Span(const unsigned int& n);
							Span(const Span& other);
		Span&					operator=(const Span& other);

		void					addNumber(const int& nbr);
		void					fillSpan(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end, int value);
		unsigned int				shortestSpan(void) const;
		unsigned int				longestSpan(void) const;
		std::vector<int>::const_iterator	getBegin(void) const;
		std::vector<int>::const_iterator	getEnd(void) const;
		size_t					getSize(void) const;

		class					SpanIsFull : public std::exception
		{
							const char	*what(void) const throw();
		};
		class					IndexOutOfRange : public std::exception
		{
							const char	*what(void) const throw();
		};
		class					NotEnoughNumber : public std::exception
		{
							const char	*what(void) const throw();
		};
};


#endif