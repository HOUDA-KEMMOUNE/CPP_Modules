# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class	Zombie
{
	private:
		std::string	name;
	public:
		Zombie(); // default constructor
    	Zombie(std::string n);
    	~Zombie();
		// void	set_name(std::string n);
		void	announce(void);
};

Zombie*	zombieHorde( int N, std::string name );

# endif