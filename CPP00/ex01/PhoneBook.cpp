#include "PhoneBook.hpp"

void    PhoneBook::set_count(int c)
{
    count = c;
}

int PhoneBook::get_count(void)
{
    return (count);
}

void    PhoneBook::set_contact(std::string fn, std::string ln, 
							std::string nn, std::string pn, std::string ds)
{
		if (count == 8)
			count = 0;
		if (count < 8)
		{
			contacts[count].set_firstName(fn);
			contacts[count].set_lastName(ln);
			contacts[count].set_nickname(nn);
			contacts[count].set_phone_nbr(pn);
			contacts[count].set_darkest_scrt(ds);
		}
}

std::string PhoneBook::get_fn(int i)
{
	std::string	first_nm = contacts[i].get_firstName();
	return (first_nm);
}
std::string PhoneBook::get_ln(int i)
{
	std::string	last_nm = contacts[i].get_lastName();
	return (last_nm);
}
std::string PhoneBook::get_nn(int i)
{
	std::string	nickname = contacts[i].get_nickname();
	return (nickname);
}
