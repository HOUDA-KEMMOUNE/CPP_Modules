#include "Zombie.hpp"

int	main()
{
	Zombie		*horde_z;
	std::string	name;
	int			n;
	int			i;

	i = 0;
	n = 5;
	horde_z = zombieHorde(n, name);
	delete[] horde_z;
}
