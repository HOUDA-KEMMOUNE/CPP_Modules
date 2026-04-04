#pragma once

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <exception>

template <typename T>
typename T::iterator	easyfind(T &container, int x)
{
	typename T::iterator	it;

	it = std::find(container.begin(), container.end(), x);

	if (it == container.end())
		throw std::exception();
	
	return (it);
}
