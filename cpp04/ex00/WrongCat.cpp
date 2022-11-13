#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat Default constructor called" << std::endl;
    this->type = "WrongCat";
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
    std::cout << "WrongCat doesn't bark, meoz meow\n";
}
