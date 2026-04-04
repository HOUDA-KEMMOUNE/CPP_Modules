#include "Animal.hpp"

Animal::Animal( void )
{
    type = "Animal doesn't have a specific type :/";
    std::cout << "\x1b[92m" << "Animal:" << "\x1b[0m" << " default constructor called" << std::endl;
}

Animal::Animal( const Animal& old )
{
    *this = old;
    std::cout << "\x1b[92m" << "Animal:" << "\x1b[0m" << ": copy assignement operator called" << std::endl;
}

Animal  &Animal::operator=( const Animal& old )
{
    if (this != &old)
    {
        this->type = old.type;
        std::cout << "\x1b[92m" << "Animal:" << "\x1b[0m" << " copy assignement operator called" << std::endl;
    }
    return (*this);
}

std::string    Animal::getType( void ) const
{
    return (type);
}

void    Animal::makeSound( void ) const
{
    std::cout << "\033[31mFor wich animal ?\033[0m" << std::endl;
}

Animal::~Animal( void )
{
    std::cout << "\x1b[92m" << "Animal:" << "\x1b[0m" << " destructor called" << std::endl;
}