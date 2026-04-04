# ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class   Fixed
{
	private:
		int	                fixed_point;
		static const int	fractional_bits = 8;

	public:
		Fixed(void);
		Fixed(const int n);
		Fixed(const float f);

		Fixed(const Fixed &old);
		Fixed &operator=(const Fixed &old);
		~Fixed(void);

		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream	&operator<<(std::ostream &out, const Fixed &old);

# endif