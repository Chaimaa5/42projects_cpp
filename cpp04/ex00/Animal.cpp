#include "Animal.hpp"

Animal::Animal()
{
    this->type = "Animal";
    std::cout << "Default constructor called for Animal " << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
    std::cout << "Parametrized constructor called for Animal " << std::endl;
}

Animal::Animal(Animal const & A)
{
    std::cout << "Copy constructor  called for Animal " << std::endl;
    this->type = A.type;
}

Animal & Animal::operator=(Animal const & A)
{
    std::cout << "assignment operator called for Animal " << A.type << std::endl;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Ooown, Animal Destroyed" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "it's just Animal sound\n";
}

const std::string &Animal::getType() const
{
    return(this->type);
}
