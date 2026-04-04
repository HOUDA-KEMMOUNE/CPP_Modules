# ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class   Brain
{
    private:
        std::string ideas[100];

    public:
        Brain( void );
        Brain( std::string type );
        Brain( const Brain& old );
        Brain &operator=( const Brain& old );
        void        setIdea( int index, std::string idea );
        std::string getIdea( int index );
        ~Brain( void );
};

# endif
