#include "Zombie.hpp"

int	main()
{
	Zombie	*alloc_zombie;
	alloc_zombie = new Zombie("Houda");
	// Zombie	zombie("Houda");
	alloc_zombie = newZombie("Houda");
	randomChump("Random Zombie");
	// alloc_zombie->announce();
	delete	alloc_zombie;
}