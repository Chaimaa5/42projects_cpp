#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    std::cout << "AAnimal constructor called\n";
}

AAnimal::AAnimal(AAnimal const & A)
{
    std::cout << "assignment operator called for Animal " << A.type << std::endl;
    (*this) = A;
}

AAnimal & AAnimal::operator=(AAnimal const & A)
{
    std::cout << "assignment operator called for Animal " << A.type << std::endl;
    return (*this);
}

AAnimal::AAnimal(std::string type){
    std::cout << "Parametrized constructor called\n";
    this->type = type;
}

AAnimal::~AAnimal()
{
    std::cout << "Ooown, Animal Destroyed" << std::endl;
}

const std::string &AAnimal::getType() const
{
    return(this->type);
}

