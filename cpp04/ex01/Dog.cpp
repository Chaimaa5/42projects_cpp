#include "Dog.hpp"

Dog::Dog(Dog const & D)
{
    std::cout << "Copy constructor  called for Dog " << std::endl;
    Animal::type = D.type;
    *this = D;
}

Dog & Dog::operator=(Dog const & D)
{
    std::cout << "assignment operator called for Dog " << D.type << std::endl;
    this->B = D.B;
    return (*this);
}

Dog::Dog()
{
    this->B = new Brain();
    this->type = "Dog";
    std::cout << "Dog Default constructor called" << std::endl;
}

Dog::~Dog()
{
    delete this->B;
    std::cout << "Ooown, Dog Destroyed" << std::endl;
}

void    Dog::makeSound() const
{
    std::cout << "Dog barks, how how\n";
}

Brain    *Dog::getBrain() const
{
    return (this->B);
}