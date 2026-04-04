#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    std::cout << "-----------------------------------------------\n" << std::endl;

    const WrongAnimal* Wrong_general = new WrongAnimal();
    const WrongAnimal* wc = new WrongCat();

    std::cout << wc->getType() << " " << std::endl;
    std::cout << Wrong_general->getType() << " " << std::endl;

    wc->makeSound();
    Wrong_general->makeSound();

    delete  wc;
    delete  Wrong_general;

    std::cout << "\n-----------------------------------------------\n" << std::endl;

    delete meta;
    delete j;
    delete i;
}
