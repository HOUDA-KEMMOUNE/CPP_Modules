# ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class   Cat : public Animal
{
    public:
        Cat( void );
        Cat( const Cat& old );
        Cat &operator=( const Cat& old );
        // std::string     getType( void ) const;
        void            makeSound( void ) const;
        ~Cat( void );
};

# endif