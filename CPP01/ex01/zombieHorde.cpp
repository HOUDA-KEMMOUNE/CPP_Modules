#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie	*alloc_zombie;
	int		i;
	std::string	str;

	alloc_zombie = new Zombie[N];
	i = 0;
	while (i < N)
	{
		std::cout << "Index " << i + 1 << ": ";
		alloc_zombie[i] = Zombie(name);
		alloc_zombie->announce();
		i++;
	}
	return (alloc_zombie);
}