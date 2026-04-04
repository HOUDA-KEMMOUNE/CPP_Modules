# include "Cat.hpp"

Cat::Cat( void )
{
    type = "Cat";
    // std::cout << "\x1b[95m" << "For debbuging: type = " << type << "\x1b[0m" << std::endl;
    std::cout << "\x1b[95m" << "Cat:" << "\x1b[0m" << " default constructor called" << std::endl;
}

Cat::Cat( const Cat& old ) : Animal(old)
{
    *this = old;
    std::cout << "\x1b[95m" << "Cat:" << "\x1b[0m" << " coppy constructor called" << std::endl;
}

Cat &Cat::operator=( const Cat& old )
{
    if (this != &old)
    {
        Animal::operator=(old);
        std::cout << "\x1b[95m" << "Cat:" << "\x1b[0m" << " coppy assignement operator called" << std::endl;
    }
    return (*this);
}

// std::string    Cat::getType( void ) const
// {
//     return (type);
// }

void    Cat::makeSound( void ) const
{
    std::cout << "\x1b[1;33m" << "Meow" << "\x1b[0m" << std::endl;
}

Cat::~Cat( void )
{
    std::cout << "\x1b[95m" << "Cat:" << "\x1b[0m" << " destructor called" << std::endl;
}
