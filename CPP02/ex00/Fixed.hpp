# ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class   Fixed
{
	private:
		int					fixed_point;
		static const int	fractional_bits = 8;

	public:
		//Roba3i l9ahar
		Fixed(void);
		Fixed(const Fixed &old);
		Fixed &operator=(const Fixed &old);
		~Fixed(void);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

# endif