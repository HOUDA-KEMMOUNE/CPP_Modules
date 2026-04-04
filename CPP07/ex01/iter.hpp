# ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void	print( T &i )
{
	std::cout << i << std::endl;
}

template <typename T>
void	iter(T *arr, const size_t len, void(*fun)(T &))
{
	size_t	i = 0;

	while (i < len)
	{
		fun(arr[i]);
		i++;
	}
}

template <typename T>
void	iter(T *arr, const size_t len, void(*fun)(const T &))
{
	size_t	i = 0;

	while (i < len)
	{
		fun(arr[i]);
		i++;
	}
}

# endif
