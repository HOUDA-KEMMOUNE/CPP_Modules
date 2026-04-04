# include "WrongCat.hpp"

WrongCat::WrongCat( void )
{
    type = "WrongCat";
    // std::cout << "\x1b[95m" << "For debbuging: type = " << type << "\x1b[0m" << std::endl;
    std::cout << "\x1b[95m" << "WrongCat:" << "\x1b[0m" << "\x1b[31m" << " default constructor called" << "\x1b[0m" << std::endl;
}

WrongCat::WrongCat( const WrongCat& old ) : WrongAnimal(old)
{
    *this = old;
    std::cout << "\x1b[95m" << "WrongCat:" << "\x1b[0m" << "\x1b[31m" << " copy constructor" << "\x1b[0m" << std::endl;
}

WrongCat &WrongCat::operator=( const WrongCat& old )
{
    if (this != &old)
    {
        WrongAnimal::operator=(old);
        std::cout << "\x1b[95m" << "WrongCat:" << "\x1b[0m" << "\x1b[31m" << " copy assignement operator" << "\x1b[0m" << std::endl;
    }
    return (*this);
}

// std::string    WrongCat::getType( void ) const
// {
//     return (type);
// }

void    WrongCat::makeSound( void ) const
{
    std::cout << "\x1b[1;33m" << "Meow" << "\x1b[0m" << std::endl;
}

WrongCat::~WrongCat( void )
{
    std::cout << "\x1b[95m" << "WrongCat:" << "\x1b[0m" << "\x1b[31m" << " destructor called" << "\x1b[0m" << std::endl;
}
