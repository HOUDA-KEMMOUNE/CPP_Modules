# ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class   WrongCat : public WrongAnimal
{
    public:
        WrongCat( void );
        WrongCat( const WrongCat& old );
        WrongCat &operator=( const WrongCat& old );
        // std::string     getType( void ) const;
        void            makeSound( void ) const;
        ~WrongCat( void );
};

# endif