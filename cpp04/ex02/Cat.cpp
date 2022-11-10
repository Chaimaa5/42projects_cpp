#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Default constructor called" << std::endl;
    this->type = "Cat";
    this->B = new Brain();
}

Cat::Cat(Cat const & C)
{
    std::cout << "Copy constructor  called for Cat " << std::endl;
   (*this) = C;
}

Cat & Cat::operator=(Cat const & C)
{
    std::cout << "assignment operator called for Cat " << C.type << std::endl;
    this->B = new Brain();
    this->B = C.B; 
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
