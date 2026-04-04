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
		//Roba3i l9ahar
		Fixed(void);
		Fixed(const int n);
		Fixed(const float f);

		Fixed(const Fixed &old);
		Fixed &operator=(const Fixed &old);
		~Fixed(void);

        float	toFloat( void ) const;
		int		toInt( void ) const;

		Fixed operator+(const Fixed &old);
		Fixed operator-(const Fixed &old);
		Fixed operator*(const Fixed &old);
		Fixed operator/(const Fixed &old);

		Fixed &operator++();
		Fixed &operator--();
		Fixed operator++(int);
		Fixed operator--(int);

		bool operator<(const Fixed &other) const;
		bool operator>(const Fixed &other) const;
		bool operator<=(const Fixed &other) const;
		bool operator>=(const Fixed &other) const;
		bool operator==(const Fixed &other) const;
		bool operator!=(const Fixed &other) const;

		static Fixed &min(Fixed &obj1, Fixed &obj2);
		static const Fixed &min(const Fixed &obj1, const Fixed &obj2);
		static Fixed &max(Fixed &obj1, Fixed &obj2);
		static const Fixed &max(const Fixed &obj1, const Fixed &obj2);
};

std::ostream	&operator<<(std::ostream &out, const Fixed &old);

# endif
