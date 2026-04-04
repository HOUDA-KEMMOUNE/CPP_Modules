#include "Span.hpp"

Span::Span( void ) : N(0)
{}

Span::Span( unsigned  int n ) : N(n)
{}

Span::Span( const Span &old ) : N(old.N)
{
	v = old.v;
}

Span	&Span::operator=( const Span &old )
{
	N = old.N;
	v = old.v;
	
	return (*this);
}

void	Span::addNumber( int num )
{
	v.push_back(num);
	if (v.size() > N)
		throw std::exception();
}

void	Span::addAll( std::vector<int>::iterator start, std::vector<int>::iterator end )
{
	while (start < end)
	{
		addNumber(*start);
		start++;
	}
}


int		Span::shortestSpan( void )
{
	int							tmp = 0;
	std::vector<int>::iterator	it = v.begin();
	std::vector<int>::iterator	it_plus = v.begin();
	std::vector<int>			a;

	std::sort(v.begin(), v.end());

	while (it++ < v.end())
	{
		it_plus = it--;

		if (it_plus == v.end())
			break ;
		
		tmp = *it_plus - *it;
		// std::cout << "*it_plus => " << *it_plus << " | *it => " << *it << " | tmp => " << tmp << std::endl;
		a.push_back(tmp);
		it++;
	}
	return (*std::min_element(a.begin(), a.end()));
}

int		Span::longestSpan( void )
{
	int	min = *std::min_element(v.begin(), v.end());
	int	max = *std::max_element(v.begin(), v.end());

	return (max - min);
}

Span::~Span( void )
{}
