#include "iter.hpp"

void	add( int &i )
{
	i++;
}

int	main()
{
	int	array[] = {1, 2, 3, 4};
	::iter(array, 4, print<int>);
	std::cout << "\n";
	::iter(array, 4, add);
	::iter(array, 4, print<int>);
	std::cout << "\n";
}