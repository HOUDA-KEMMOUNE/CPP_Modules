# ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class   Dog : public Animal
{
    public:
        Dog( void );
        Dog( const Dog& old );
        Dog &operator=( const Dog& old );
        void            makeSound( void ) const;
        ~Dog( void );
};

# endif