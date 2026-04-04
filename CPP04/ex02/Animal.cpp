#include "Animal.hpp"

AAnimal::AAnimal( void )
{
    type = "";
    std::cout << "\x1b[92m" << "AAnimal:" << "\x1b[0m" << " default constructor called" << std::endl;
}

AAnimal::AAnimal( const AAnimal& old )
{
    *this = old;
    std::cout << "\x1b[92m" << "AAnimal:" << "\x1b[0m" << " copy constructor called" << std::endl;
}

AAnimal  &AAnimal::operator=( const AAnimal& old )
{
    if (this != &old)
    {
        this->type = old.type;
        std::cout << "\x1b[92m" << "AAnimal:" << "\x1b[0m" << " copy assignement operator called" << std::endl;
    }
    return (*this);
}

std::string    AAnimal::getType( void ) const
{
    return (type);
}

AAnimal::~AAnimal( void )
{
    std::cout << "\x1b[92m" << "Animal:" << "\x1b[0m" << " destructor called" << std::endl;
}