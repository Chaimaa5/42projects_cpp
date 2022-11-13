#include "Dog.hpp"

Dog::Dog(Dog const & D)
{
    std::cout << "Copy constructor  called for Dog " << std::endl;
    Animal::type = D.type;
}

Dog & Dog::operator=(Dog const & D)
{
    std::cout << "assignment operator called for Dog " << D.type << std::endl;
    return (*this);
}

Dog::Dog()
{
    std::cout << "Dog Default constructor called" << std::endl;
    this->type = "Dog";
}

Dog::~Dog()
{
    std::cout << "Ooown, Dog Destroyed" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "Dog barks, how how\n";
}
