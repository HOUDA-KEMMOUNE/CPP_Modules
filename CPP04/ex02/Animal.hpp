# ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class   AAnimal
{
    protected:
        std::string type;

    public:
        AAnimal( void );
        AAnimal( const AAnimal& old );
        AAnimal &operator=( const AAnimal& old );
        std::string     getType( void ) const;
        virtual void    makeSound( void ) const = 0;
        virtual ~AAnimal( void );
};

# endif