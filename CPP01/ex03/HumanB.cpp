#include "HumanB.hpp"

HumanB::HumanB(std::string n_name)
{
	weapon = NULL;
	name = n_name;
}

void	HumanB::attack(void)
{
	if (!weapon)
	{
		std::cout << name << " has no weapon !\n";
		return ;
	}
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &n_weapon)
{
	weapon = &n_weapon;
}
