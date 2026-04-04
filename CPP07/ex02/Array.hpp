#pragma once

#include <exception>
#include <iostream>

template <typename T>
class	Array
{
	private:
		unsigned int	_size;
		T				*data;

	public:
		Array() : _size(0)
		{
			data = NULL;
		}

		Array( unsigned int n ): _size(n)
		{
			data = new T[n];
		}

		Array( const Array &old ) : _size(old._size)
		{
			data = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				data[i] = old.data[i];

		}

		Array	&operator=( const Array &old )
		{
			_size = old._size;
			delete []data;
			data = new T[_size];

			for (unsigned int i = 0; i < _size; i++)
				data[i] = old.data[i];
			
			return (*this);
		}

		unsigned int	size( void ) const
		{
			return (_size);
		}

		class	myExcpt : public std::exception
		{
			const char	*what() const throw()
			{
				return "Invalide size :/";
			}
		};

		T	&operator[]( unsigned int i )
		{
			if (i > _size)
			{
				throw myExcpt();
			}
			else
			{
				return data[i];
			}
		}

		~Array()
		{
			delete []data;
		}
};
