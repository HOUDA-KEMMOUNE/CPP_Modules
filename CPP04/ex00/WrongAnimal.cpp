#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
    type = "WrongAnimal doesn't have a specific type :/";
    std::cout << "\x1b[92m" << "WrongAnimal:" << "\x1b[0m" << "\x1b[31m" << " default constructor called" << "\x1b[0m" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& old )
{
    *this = old;
    std::cout << "\x1b[92m" << "WrongAnimal:" << "\x1b[0m" << "\x1b[31m" << " coppy constructor called" << "\x1b[0m" << std::endl;
}

WrongAnimal  &WrongAnimal::operator=( const WrongAnimal& old )
{
    if (this != &old)
    {
        this->type = old.type;
        std::cout << "\x1b[92m" << "WrongAnimal:" << "\x1b[0m" << "\x1b[31m" << " copy assignement operator called" << "\x1b[0m" << std::endl;
    }
    return (*this);
}

std::string    WrongAnimal::getType( void ) const
{
    return (type);
}

void    WrongAnimal::makeSound( void ) const
{
    std::cout << "\033[31mWhich sound ??\033[0m" << std::endl;
}

WrongAnimal::~WrongAnimal( void )
{
    std::cout << "\x1b[92m" << "WrongAnimal:" << "\x1b[0m" << "\x1b[31m" << " destructor called" << "\x1b[0m" << std::endl;
}