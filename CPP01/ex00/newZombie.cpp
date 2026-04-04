#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie	*allocate_zombie;

	allocate_zombie = new Zombie(name);
	std::cout << "Zombie \"" << name << "\" created\n";
	allocate_zombie->announce();
	return (allocate_zombie);
}