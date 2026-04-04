#include "easyfind.hpp"

int main()
{
    std::vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    try
    {
        std::vector<int>::iterator it = easyfind(v, 20);
        std::cout << "Found in vector: " << *it << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Not found in vector" << std::endl;
    }

    try
    {
        easyfind(v, 99);
        std::cout << "Found in vector" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Not found in vector" << std::endl;
    }

    return 0;
}
