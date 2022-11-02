#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main() {
    const Animal* meta = new Animal(); 
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "i type is : " << i->getType() << std::endl;
    std::cout << "j type is : " << j->getType() << std::endl;
    j->makeSound(); 
    i->makeSound();
    meta->makeSound();
    delete j;
    delete i;
    delete meta;


    const WrongAnimal* Wrongmeta = new WrongAnimal(); 
    const WrongAnimal* Wrongj = new WrongCat();

    std::cout << Wrongj->getType() << std::endl;
    Wrongj->makeSound(); 
    Wrongmeta->makeSound();
    delete  Wrongj;
    delete  Wrongmeta;
    return 0; 
}