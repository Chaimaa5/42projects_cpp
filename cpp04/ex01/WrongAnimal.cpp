#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "WrongAnimal";
    std::cout << "Default constructor called for WrongAnimal " << std::endl;
}
WrongAnimal::WrongAnimal(std::string type) : type(type)
{
    std::cout << "Parametrized constructor called for WrongAnimal " << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & A)
{
    std::cout << "Copy constructor  called for WrongAnimal " << std::endl;
    this->type = A.type;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & A)
{
    std::cout << "assignment operator called for WrongAnimal " << A.type << std::endl;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Ooown, WrongAnimal Destroyed" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "it's just WrongAnimal sound\n";
}

const std::string &WrongAnimal::getType() const
{
    return(this->type);
}
