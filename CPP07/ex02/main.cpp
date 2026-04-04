#include <iostream>
#include "Array.hpp"

int main()
{
    std::cout << "---- Default constructor ----" << std::endl;
    Array<int> a;
    std::cout << "Size: " << a.size() << std::endl;

    std::cout << "\n---- Constructor with size ----" << std::endl;
    Array<int> b(5);
    std::cout << "Size: " << b.size() << std::endl;

    std::cout << "\n---- Assign values ----" << std::endl;
    for (unsigned int i = 0; i < b.size(); i++)
        b[i] = i * 10;

    for (unsigned int i = 0; i < b.size(); i++)
        std::cout << "b[" << i << "] = " << b[i] << std::endl;

    std::cout << "\n---- Copy constructor ----" << std::endl;
    Array<int> c(b);

    std::cout << "Modifying c[0] = 999" << std::endl;
    c[0] = 999;

    std::cout << "b[0] = " << b[0] << std::endl;
    std::cout << "c[0] = " << c[0] << std::endl;

    std::cout << "\n---- Assignment operator ----" << std::endl;
    Array<int> d;
    d = b;

    std::cout << "Modifying d[1] = 777" << std::endl;
    d[1] = 777;

    std::cout << "b[1] = " << b[1] << std::endl;
    std::cout << "d[1] = " << d[1] << std::endl;

    std::cout << "\n---- Out of bounds test ----" << std::endl;
    try
    {
		// std::cout << "jhjhfhfh\n";
        std::cout << b[10] << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cout << "Exception caught!" << std::endl;
    }

    return 0;
}
