#include "Weapon.hpp"

const std::string&	Weapon::getType(void)
{
	// std::cout << "The type in getType ==> " << type << std::endl;
	return (type);
}

void				Weapon::setType(std::string new_type)
{
	// std::cout << "The new type in setType ==> " << new_type << std::endl;
	type = new_type;
}

Weapon::Weapon(std::string T)
{
	type = T;
}

Weapon::~Weapon(void)
{

}

Weapon::Weapon(void)
{

}