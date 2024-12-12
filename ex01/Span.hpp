#ifndef SPAN_HPP

# define SPAN_HPP

# include <iostream>
# include <vector>

class	Span
{
	private:
		size_t			_size;
		std::vector<int>	_array;

	public:
					Span(void);
					~Span(void);

					Span(unsigned int& n);
					Span(const Span& other);
		Span&			operator=(const Span& other);

		void			addNumber(int& nbr);

		class			SpanIsFull : public std::exception
		{
					const char	*what(void) const throw();
		};
};

#endif