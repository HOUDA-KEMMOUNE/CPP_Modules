#include "Dog.hpp"
#include "Cat.hpp"

// int main()
// {
//     Animal  animal;
//     animal.getType();
// }

int main()
{
    std::cout << "---- Basic tests from subject ----" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;
    delete i;

    std::cout << std::endl;

    std::cout << "---- Array of Animals test ----" << std::endl;

    const int size = 10;
    const Animal* animals[size];

    for (int k = 0; k < size; k++)
    {
        if (k % 2 == 0)
            animals[k] = new Dog();
        else
            animals[k] = new Cat();
    }

    std::cout << std::endl;

    for (int k = 0; k < size; k++)
    {
        delete animals[k];
    }

    std::cout << std::endl;

    std::cout << "---- Deep copy test ----" << std::endl;

    Dog originalDog;
    originalDog.setIdea(0, "I want food");
    originalDog.setIdea(1, "I want sleep");

    Dog copyDog = originalDog;

    originalDog.setIdea(0, "I want to run");

    std::cout << "Original: " << originalDog.getIdea(0) << std::endl;
    std::cout << "Copy:     " << copyDog.getIdea(0) << std::endl;

    return 0;
}
