#include "Dog.hpp"

Dog::Dog( void )
{
    type = "Dog";
    brain = new Brain(type);
    std::cout << "\x1b[38;2;0;41;102m" << "Dog:" << "\x1b[0m" << " default constructor called" << std::endl;
}

Dog::Dog( const Dog& old ) : AAnimal(old)
{
    brain = new Brain("Dog");

    for (int i = 0; i < 100; i++)
        brain->setIdea(i, old.brain->getIdea(i));

    std::cout << "\x1b[38;2;0;41;102m" << "Dog:" << "\x1b[0m" << " copy constructor called" << std::endl;
}

Dog &Dog::operator=( const Dog& old )
{
    if (this != &old)
    {
        AAnimal::operator=(old);
        delete brain;
        brain = new Brain("Dog");

        for (int i = 0; i < 100; i++)
            brain->setIdea(i, old.brain->getIdea(i));

        std::cout << "\x1b[38;2;0;41;102m" << "Dog:" << "\x1b[0m" << " copy assignement operator called" << std::endl;
    }

    return (*this);
}

void    Dog::makeSound( void ) const
{
    std::cout << "\x1b[96m" << "ruff" << "\x1b[0m" << std::endl;
}

void    Dog::setIdea( int index, std::string idea )
{
    brain->setIdea(index, idea);
}

std::string Dog::getIdea( int index )
{
    return (brain->getIdea(index));
}

Dog::~Dog( void )
{
    std::cout << "\033[31m" << "(Dog) " << "\033[0m";
    delete brain;
    std::cout << "\x1b[38;2;0;41;102m" << "Dog:" << "\x1b[0m" << " destructor called" << std::endl;
}
