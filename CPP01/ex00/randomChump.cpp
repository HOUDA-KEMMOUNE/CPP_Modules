#include "Zombie.hpp"

void	randomChump( std::string name )
{
	Zombie	zombie(name);
	std::cout << "Zombie \"" << name << "\" created\n";
	zombie.announce();
}