/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hkemmoun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 20:32:55 by hkemmoun          #+#    #+#             */
/*   Updated: 2025/09/18 20:32:59 by hkemmoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	check_str(char c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1); //the character should be upper (TODO)
	else
		return (0); //should do nothing
}

int	is_space(char c)
{
	if (c == '\0')
		return (-1);
	if ((c >= 9 && c <= 13) || c == 32)
		return (1); //is space
	else
		return (0); //isn't space
}

char	*end_of_word(char *str)
{
	int		i;
	int		end;
	int		flag;

	i = 0;
	while (str[i])
		i++;
	end = i - 1;
	flag = 0;
	while (end >= 0)
	{
		if (is_space(str[end]) == 0)
		{
			flag = 1;
			break ;
		}
		end--;
	}
	if (flag == 1)
	{
		str[end + 1] = '\0';
	}
	return (str);
}

char	*skip_spaces(char *str)
{
	int		i;

	i = 0;
	while (is_space(*str) == 1 || is_space(*str) == -1)
	{
		if (is_space(*str) == -1)
		break ;
		i++;
		str++;
	}
	str = end_of_word(str);
	return (str);
}

char	*str_upper(char *str)
{
	int	i;

	i = 0;
	str = skip_spaces(str);
	while (str[i])
	{
		if (check_str(str[i]) == 1)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

int	main(int ac, char **av)
{
	int		i;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		i = 1;
		while (av[i])
		{
			char *str = str_upper(av[i]);
			std::cout << str;
			if (av[i + 1] != NULL)
				std::cout << " ";
			i++;
		}
		std::cout << std::endl;
	}
}
