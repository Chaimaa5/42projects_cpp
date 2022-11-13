#include "Dog.hpp"

Dog::Dog(Dog const & D)
{
    std::cout << "Copy constructor  called for Dog " << std::endl;
    this->type = D.type;
    this->B = new Brain();
    B = D.B;
}

Dog & Dog::operator=(Dog const & D)
{
    std::cout << "assignment operator called for Dog " << D.type << std::endl;
    delete B;
    this->B = new Brain();
    (*this->B) = *D.B; 
    return (*this);
}

Dog::Dog()
{
    std::cout << "Dog Default constructor called" << std::endl;
    this->type = "Dog";
    this->B = new Brain();
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