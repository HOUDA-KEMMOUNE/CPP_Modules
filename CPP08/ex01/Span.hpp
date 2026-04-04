#pragma once

#include <iostream>
#include <string>
#include <exception>
#include <algorithm>
#include <vector>

class	Span
{
	private:
		unsigned int				N;
		std::vector<int>			v;

	public:
		Span( void );
		Span( unsigned int n );
		Span( const Span &old );
		Span	&operator=( const Span &old );
		void	addNumber( int num );
		void	addAll( std::vector<int>::iterator start, std::vector<int>::iterator end );
		int		shortestSpan( void );
		int		longestSpan( void );
		~Span( void );

};
