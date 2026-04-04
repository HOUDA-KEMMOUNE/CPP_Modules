#include "HumanA.hpp"

HumanA::HumanA(std::string n_name, Weapon& n_weaponA) : weapon(n_weaponA)
{
	name = n_name;
}

void	HumanA::attack(void)
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
