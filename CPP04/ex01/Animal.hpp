# ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class   Animal
{
    protected:
        std::string type;

    public:
        Animal( void );
        Animal( const Animal& old );
        Animal &operator=( const Animal& old );
        std::string     getType( void ) const;
        virtual void    makeSound( void ) const;
        virtual ~Animal( void );
};

# endif