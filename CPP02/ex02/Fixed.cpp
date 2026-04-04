#include "Fixed.hpp"

Fixed::Fixed( void )
{
    fixed_point = 0;
}

Fixed::Fixed(const int n)
{
    fixed_point = n << fractional_bits; // = n * 2^fractional_bits
}

Fixed::Fixed(const float f)
{
    fixed_point = roundf(f * (1 << fractional_bits));
}

Fixed::Fixed(const Fixed &old)
{
    *this = old;
}

Fixed &Fixed::operator=(const Fixed &old)
{
    if (this != &old)
	{
		this->fixed_point = old.fixed_point;
	}
	return (*this);
}

Fixed::~Fixed( void )
{
}

float   Fixed::toFloat( void ) const
{
    float   res;

    res = (float)fixed_point / (1 << fractional_bits); // = fixed_point / 2^fractioanl_bits
    return (res);
}

int     Fixed::toInt( void ) const
{
    int     res;

    res = fixed_point >> fractional_bits; // = fixed_point / 2^fractianal_bits
    return (res);
}

// ----------------- stream insertion operator -----------------

std::ostream	&operator<<(std::ostream &out, const Fixed &old)
{
    out << old.toFloat();
    return (out);
}

// ---------------- Simple operators ----------------

Fixed Fixed::operator+(const Fixed &old)
{
    Fixed   res;
    float   a;
    float   b;

    a = this->toFloat();
    b = old.toFloat();
    res = a + b;
    return (res);
}

Fixed Fixed::operator-(const Fixed &old)
{
    Fixed   res;
    float   a;
    float   b;

    a = this->toFloat();
    b = old.toFloat();
    res = a - b;
    return (res);
}

Fixed Fixed::operator*(const Fixed &old)
{
    Fixed   res;
    float   a;
    float   b;

    a = this->toFloat();
    b = old.toFloat();
    res = a * b;
    return (res);
}

Fixed Fixed::operator/(const Fixed &old)
{
    Fixed   res;
    float   a;
    float   b;

    a = this->toFloat();
    b = old.toFloat();
    res = a / b;
    return (res);
}

// ---------------- increment/decrement operators ----------------

Fixed &Fixed::operator++()
{
    // int a = 5;
    // int b = ++a;   // a becomes 6, b becomes 6

    this->fixed_point++;
    return (*this);
}

Fixed &Fixed::operator--()
{
    // int a = 5;
    // int b = --a;   // a becomes 5, b becomes 5

    this->fixed_point--;
    return (*this);
}

Fixed Fixed::operator++( int )
{
    // int a = 5;
    // int b = a++;   // a becomes 6, b becomes 5

    Fixed   temp(*this);
    this->fixed_point++;
    return (temp);
}

Fixed Fixed::operator--( int )
{
     // int a = 5;
    // int b = a--;   // a becomes 4, b becomes 5

    Fixed   temp(*this);
    this->fixed_point--;
    return (temp);
}

// --------- bool operators ------------------

bool Fixed::operator>(const Fixed &other) const
{
    return (this->fixed_point > other.fixed_point);
}

bool Fixed::operator<(const Fixed &other) const
{
    return (this->fixed_point < other.fixed_point);
}

bool Fixed::operator>=(const Fixed &other) const
{
    return (this->fixed_point >= other.fixed_point);
}

bool Fixed::operator<=(const Fixed &other) const
{
    return (this->fixed_point <= other.fixed_point);
}


bool Fixed::operator!=(const Fixed &other) const
{
    return (this->fixed_point != other.fixed_point);
}

bool Fixed::operator==(const Fixed &other) const
{
    return (this->fixed_point == other.fixed_point);
}

// --------- min/max methods ------------------
Fixed &Fixed::min(Fixed &obj1, Fixed &obj2)
{
    if (obj1 < obj2)
        return (obj1);
    else
        return (obj2);
}

Fixed &Fixed::max(Fixed &obj1, Fixed &obj2)
{
    if (obj1 > obj2)
        return (obj1);
    else
        return (obj2);
}

const Fixed &Fixed::min(const Fixed &obj1, const Fixed &obj2)
{
    if (obj1 < obj2)
        return (obj1);
    else
        return (obj2);
}

const Fixed &Fixed::max(const Fixed &obj1, const Fixed &obj2)
{
    if (obj1 > obj2)
        return (obj1);
    else
        return (obj2);
}


