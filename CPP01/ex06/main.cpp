#include "Harl.hpp"

int	ft_strcmp(std::string s1, std::string s2)
{
	int	i = 0;

	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int	main(int ac, char **av)
{
	Harl	harl;

	if (ac != 2)
	{
		std::cout << "Wrong number of arguments!\n";
		return (0);
	}
	if ((ft_strcmp(av[1], "debug") == 1) || (ft_strcmp(av[1], "info") == 1) || (ft_strcmp(av[1], "warning") == 1) || (ft_strcmp(av[1], "error") == 1))
	{
		std::cout << "Please write it in upper case !\n";
		return (0);
	}
	if ((ft_strcmp(av[1], "DEBUG") == 0) && (ft_strcmp(av[1], "INFO") == 0) && (ft_strcmp(av[1], "WARNING") == 0) && (ft_strcmp(av[1], "ERROR") == 0))
	{
		std::cout << "av[1] => " << av[1] << '\n';
		std::cout << "No Valid Level !\n";
		return (0);
	}
	
	harl.complain(av[1]);
}