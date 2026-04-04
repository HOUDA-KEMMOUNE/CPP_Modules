#include "Brain.hpp"

Brain::Brain( void )
{
    std::cout << "\t-> Brain: Default constructor called" << std::endl;
}

Brain::Brain( std::string type )
{
    std::cout << "\033[33m" << "(" << type << ") " << "\033[0m";
    std::cout << "\t-> Brain : constructor called" << std::endl;
}

Brain::Brain( const Brain& old )
{
    *this = old;
    std::cout << "\t-> Brain: Copy constructor called" << std::endl;
}

Brain   &Brain::operator=( const Brain& old )
{
    if (this != &old)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = old.ideas[i];
        std::cout << "\t-> Brain: Copy assignement operator called" << std::endl;
    }
    return (*this);
}

void    Brain::setIdea( int index, std::string idea )
{
    this->ideas[index] = idea;
}

std::string    Brain::getIdea( int index )
{
    return (this->ideas[index]);
}

Brain::~Brain( void )
{
    std::cout << "\t-> Brain: Destructor called" << std::endl;
}