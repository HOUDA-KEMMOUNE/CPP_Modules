#include "PhoneBook.hpp"

// SETTERS

void	Contact::set_firstName(std::string fn)
{
	firstName = fn;
}

void	Contact::set_lastName(std::string ln)
{
	lastName = ln;
}

void	Contact::set_nickname(std::string nn)
{
	nickname = nn;
}

void	Contact::set_phone_nbr(std::string pn)
{
	phone_nbr = pn;
}

void	Contact::set_darkest_scrt(std::string ds)
{
	darkest_scrt = ds;
}

// GETTERS

std::string	Contact::get_firstName(void)
{
	return (firstName);
}
std::string	Contact::get_lastName(void)
{
	return (lastName);
}
std::string	Contact::get_nickname(void)
{
	return (nickname);
}
std::string	Contact::get_phone_nbr(void)
{
	return (phone_nbr);
}
std::string	Contact::get_darkest_scrt(void)
{
	return (darkest_scrt);
}
