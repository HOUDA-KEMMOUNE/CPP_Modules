#include <iostream>
#include <fstream>

void	write_in_new_file(std::string s1, std::string s2, std::string input, std::ofstream& creat_file)
{
	size_t	pos = 0;
	size_t	found;

	if (s1.empty())
	{
		creat_file << input << "\n";
		return ;
	}

	while ((found = input.find(s1, pos)) != std::string::npos)
	{
		creat_file << input.substr(pos, found - pos);
		creat_file << s2;
		pos = found + s1.length();
	}

	creat_file << input.substr(pos) << '\n';
}

int main(int ac, const char **av)
{
	std::string	input;
	std::string	s1 = av[2];
	std::string	s2 = av[3];

	if (ac != 4)
	{
		std::cerr << "Please Enter 3 arguments !\n";
		return (1);
	}
	
	std::string	new_av = av[1];
	// Check if we have the file
	std::ifstream in_file(av[1]);
	if (in_file.fail())
	{
		std::cout << av[1] << ": does not exist :/\n";
		return (0);
	}

	// Open the file.replace
	std::string	new_file = new_av + ".replace";
	std::ofstream	creat_file(new_file.c_str());
	if (!creat_file)
	{
		std::cerr << "Error creating file :/\n";
		return (1);
	}

	while (getline(in_file, input))
	{
		write_in_new_file(s1, s2, input, creat_file);
	}

}