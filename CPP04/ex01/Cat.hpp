# ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class   Cat : public Animal
{
    private:
        Brain   *brain;

    public:
        Cat( void );
        Cat( const Cat& old );
        Cat &operator=( const Cat& old );
        void        makeSound( void ) const;
        void        setIdea( int index, std::string idea );
        std::string getIdea( int index );
        ~Cat( void );
};

# endif