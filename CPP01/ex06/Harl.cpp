#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "\n----- DEBUG Level -----\n";
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "\n----- INFO Level -----\n";
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "\n----- WARNING Level -----\n";
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "\n----- ERROR Level -----\n";
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*harl_complain[4])() = 
	{
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};

	int	i = 0;

	while (i < 4)
	{
		if (level == levels[i])
		{
			while (i < 4)
			{
				if (i == 4)
					break ;
				(this->*harl_complain[i])();
				i++;
			}
		}
		i++;
	}
}