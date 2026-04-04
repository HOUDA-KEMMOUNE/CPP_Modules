# ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <string>
# include <iomanip>

class	Contact
{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	phone_nbr;
		std::string	darkest_scrt;

	public:
		//setters
		void		set_firstName(std::string fn);
		void		set_lastName(std::string ln);
		void		set_nickname(std::string nn);
		void		set_phone_nbr(std::string pn);
		void		set_darkest_scrt(std::string ds);
		
		//getters
		std::string	get_firstName(void);
		std::string	get_lastName(void);
		std::string	get_nickname(void);
		std::string	get_phone_nbr(void);
		std::string	get_darkest_scrt(void);
};

# endif