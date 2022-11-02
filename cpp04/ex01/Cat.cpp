#include "Cat.hpp"

Cat::Cat()
{
    this->B = new Brain();
    this->type = "Cat";
    std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(Cat const & C)
{
    std::cout << "Copy constructor  called for Cat " << std::endl;
    Animal::type  = C.type;
    B = new Brain;
    *B = *(C.B);
}

Cat & Cat::operator=(Cat const & C)
{
    std::cout << "assignment operator called for Cat " << C.type << std::endl;
    return (*this);
}

Cat::~Cat()
{
    delete this->B;
    std::cout << "Ooown, Cat Destroyed" << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "Cat doesn't barks, meoz meow\n";
}

Brain    *Cat::getBrain() const
{
    return (this->B);
}