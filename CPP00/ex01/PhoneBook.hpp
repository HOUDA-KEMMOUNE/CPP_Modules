# ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	contacts[8];
		int		count;
		
	public:
		void	set_count(int c);
		int		get_count(void);
		void	set_contact(std::string fn, std::string ln, 
							std::string nn, std::string pn, std::string ds);
		std::string	get_fn(int i);
		std::string	get_ln(int i);
		std::string	get_nn(int i);
};

# endif