# ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class   WrongAnimal
{
    protected:
        std::string type;

    public:
        WrongAnimal( void );
        WrongAnimal( const WrongAnimal& old );
        WrongAnimal &operator=( const WrongAnimal& old );
        std::string     getType( void ) const;
        void            makeSound( void ) const;
        ~WrongAnimal( void );
};

# endif
