#ifndef SPAN_HPP

# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <list>

class	Span
{
	private:
		unsigned int		_size;
		std::vector<int>	_tab;
	
	public:
					Span(void);
					~Span(void);

					Span(const unsigned int& N);
					Span(const Span& other);
		Span&			operator=(const Span& other);

		void			addNumber(const int& number);
		unsigned int		shortestSpan(void) const;
		unsigned int		longestSpan(void) const;
		void			display(void) const;

		template <typename T>
		void			fill(const typename T::const_iterator begin, const typename T::const_iterator end);

		class			TabIsFull : public std::exception
		{
					const char	*what(void) const throw();
		};
		class			NotEnoughNumbers : public std::exception
		{
					const char	*what(void) const throw();
		};
		class			NotEnoughSpaceInArray : public std::exception
		{
					const char	*what(void) const throw();
		};
};

# include "Span.tpp"

#endif