/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 20:34:36 by hkemmoun          #+#    #+#             */
/*   Updated: 2025/09/18 20:34:39 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "utils.hpp"

std::string	is_empty(std::string data, std::string action)
{
	size_t	    i;
	char        c;
	int	        valid;

	while (1)
	{
		if (data.empty())
		{
			std::cout << "\033[31mInvalid input\033[0m\n";
			std::cout << action << ": ";
			std::getline(std::cin, data);
		}
		else if (action == "First Name" || action == "Last Name")
		{
			i = 0;
			valid = 1;
			while (i < data.length())
			{
				c = data[i];
				if (!std::isalpha(c)) //cause it returns 0 if it's not alpha
				{
					std::cout << "\033[31mInvalid input [Your input should contain just alphabets !]\033[0m\n";
					valid = 0;
					std::cout << action << ": ";
					std::getline(std::cin, data);
					break ;
				}
				i++;
			}
			if (valid == 1)
				return (data);
		}
		else if (action == "Phone number")
		{
			i = 0;
			valid = 1;
			while (i < data.length())
			{
				c = data[i];
				if (!std::isdigit(c)) //cause it returns 0 if it's not digit
				{
					std::cout << "\033[31mInvalid input [Your input should contain just numbers !]\033[0m\n";
					valid = 0;
					std::cout << action << ": ";
					std::getline(std::cin, data);
					break ;
				}
				i++;
			}
			if (valid == 1)
				return (data);
		}
		else
			return (data);
	}
	return (data);
}

void	print_info(std::string str)
{
	size_t		i;
	std::string	new_str;

	i = 0;
	if (str.length() > 10)
	{
		while (i < 10)
		{
			i++;
		}
		i--;
		str[i] = '.';
		new_str = str.substr(0, 10);
		std::cout << std::setw(10) << new_str;
	}
	else
		std::cout << std::setw(10) << str;
}

void	have_search_contact(int i, PhoneBook phone_book)
{
	std::string	first_nm = phone_book.get_fn(i);
	std::string	last_nm = phone_book.get_ln(i);
	std::string	nickname = phone_book.get_nn(i);

	std::cout << "+----------+----------+----------+----------+\n";
	std::cout << "|  index   |first name| last name| nickname |\n";
	std::cout << "+----------+----------+----------+----------+\n";

	std::cout << "|";
	std::cout << std::setw(10) << i + 1;
	std::cout << "|";

	print_info(first_nm);
	std::cout << "|";

	print_info(last_nm);
	std::cout << "|";

	print_info(nickname);
	std::cout << "|";
	std::cout << std::endl;

	std::cout << "+----------+----------+----------+----------+\n";
}
