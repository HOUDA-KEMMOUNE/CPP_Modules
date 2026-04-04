#include "Dog.hpp"

Dog::Dog( void )
{
    type = "Dog";
    std::cout << "\x1b[38;2;0;41;102m" << "Dog:" << "\x1b[0m" << " default constructor called" << std::endl;
}

Dog::Dog( const Dog& old ) : Animal(old)
{
    *this = old;
    std::cout << "\x1b[38;2;0;41;102m" << "Dog:" << "\x1b[0m" << " copy constructor called" << std::endl;
}

Dog &Dog::operator=( const Dog& old )
{
    if (this != &old)
    {
        Animal::operator=(old);
        std::cout << "\x1b[38;2;0;41;102m" << "Dog:" << "\x1b[0m" << " copy assignement operator called" << std::endl;
    }
    return (*this);
}

void    Dog::makeSound( void ) const
{
    std::cout << "\x1b[96m" << "ruff" << "\x1b[0m" << std::endl;
}

Dog::~Dog( void )
{
    std::cout << "\x1b[38;2;0;41;102m" << "Dog:" << "\x1b[0m" << " destructor called" << std::endl;
}
