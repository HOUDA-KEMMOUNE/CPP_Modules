/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 20:34:08 by hkemmoun          #+#    #+#             */
/*   Updated: 2025/09/18 20:34:09 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "utils.hpp"

int	print_search(int id, PhoneBook phone_book, int count)
{
	if (id >= count)
		std::cout << "\033[31mWe don't have this contact in the list yet :/\033[0m\n\n";
	else
	{
		have_search_contact(id, phone_book);
		std::cout << std::endl;
		return (1);
	}
	return (0);
}

void	search_cases(std::string search_inp, PhoneBook phone_book, int count)
{
	if (search_inp == "0")
		return ;
	else if (search_inp == "1")
	{
		if (print_search(0, phone_book, count) == 1)
			return ;
	}
	else if (search_inp == "2")
	{
		if (print_search(1, phone_book, count) == 1)
			return ;
	}
	else if (search_inp == "3")
	{
		if (print_search(2, phone_book, count) == 1)
			return ;
	}
	else if (search_inp == "4")
	{
		if (print_search(3, phone_book, count) == 1)
			return ;
	}
	else if (search_inp == "5")
	{
		if (print_search(4, phone_book, count) == 1)
			return ;
	}
	else if (search_inp == "6")
	{
		if (print_search(5, phone_book, count) == 1)
			return ;
	}
	else if (search_inp == "7")
	{
		if (print_search(6, phone_book, count) == 1)
			return ;
	}
	else if (search_inp == "8")
	{
		if (print_search(7, phone_book, count) == 1)
			return ;
	}
	else
		std::cout << "\033[31mInvalid input: Enter Contact ID [From 1 to 8]\033[0m\n\n";
}

int	main(void)
{
	PhoneBook	phone_book;
	static int	count;
	std::string	search_inp;
	std::string	input;
	std::string	data[5];

	while (1)
	{
		std::cout << "Please enter one of this options \033[35m[ADD, SEARCH, EXIT]\033[0m\n";
		std::cout << "\033[1;32mPhoneBook>\033[0m ";
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			// count = 0;
			std::cout << "\033[35mEnter Contact Information\033[0m\n";

			//first name
			std::cout << "First Name: ";
			std::getline(std::cin, data[0]);
			data[0] = is_empty(data[0], "First Name");

			//last name
			std::cout << "Last Name: ";
			std::getline(std::cin, data[1]);
			data[1] = is_empty(data[1], "Last Name");

			//Nickname
			std::cout << "Nickname: ";
			std::getline(std::cin, data[2]);
			data[2] = is_empty(data[2], "Nickname");

			//Nickname
			std::cout << "Phone number: ";
			std::getline(std::cin, data[3]);
			data[3] = is_empty(data[3], "Phone number");

			//Darkest secret
			std::cout << "Darkest secret: ";
			std::getline(std::cin, data[4]);
			data[4] = is_empty(data[4], "Darkest secret");
			
			if (count == 8)
				count = 0;
			phone_book.set_count(count);
			phone_book.set_contact(data[0], data[1], data[2], data[3], data[4]);
			std::cout << "\033[1;32mContact Added Successfully !\033[0m\n\n";
			count++;
		}
		else if (input == "SEARCH")
		{
			std::cout << "\033[35mEnter Contact ID [From 1 to 8]\033[0m\n";
			std::cout << "\033[36m-> (The 9th contact becomes the first ...etc)\033[0m\n";
			std::cout << "\033[36m-> (Enter 0 to exit from the SEARCH)\033[0m\n";
			std::cout << "\033[38;2;180;180;255m==> ID: \033[0m";
			std::getline(std::cin, search_inp);
			search_cases(search_inp, phone_book, count);
		}
		else if (input == "EXIT")
			return (0);
		else
			std::cout << "\033[31mInvalid input\033[0m\n\n";
	}
	// parsing(void);
}
