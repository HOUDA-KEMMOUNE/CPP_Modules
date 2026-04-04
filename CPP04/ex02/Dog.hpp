# ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class   Dog : public AAnimal
{
    private:
        Brain   *brain;

    public:
        Dog( void );
        Dog( const Dog& old );
        Dog &operator=( const Dog& old );
        void    makeSound( void ) const;
        void        setIdea( int index, std::string idea );
        std::string getIdea( int index );
        ~Dog( void );
};

# endif