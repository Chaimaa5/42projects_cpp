#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & C)
{
    std::cout << "Copy constructor  called for WrongCat " << std::endl;
   WrongAnimal::type  = C.type;
}

WrongCat & WrongCat::operator=(WrongCat const & C)
{
    std::cout << "assignment operator called for WrongCat " << C.type << std::endl;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "Ooown, WrongCat Destroyed" << std::endl;
}

void    WrongCat::makeSound() const
{
    std::cout << "WrongCat doesn't barks, meoz meow\n";
}
