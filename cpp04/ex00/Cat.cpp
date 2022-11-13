#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Default constructor called" << std::endl;
    this->type = "Cat";
}

Cat::Cat(Cat const & C)
{
    std::cout << "Copy constructor  called for Cat " << std::endl;
   Animal::type  = C.type;
}

Cat & Cat::operator=(Cat const & C)
{
    std::cout << "assignment operator called for Cat " << C.type << std::endl;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Ooown, Cat Destroyed" << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "Cat doesn't barks, meow meow\n";
}
