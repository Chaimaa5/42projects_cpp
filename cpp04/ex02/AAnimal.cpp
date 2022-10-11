#include "AAnimal.hpp"

AAnimal::~AAnimal()
{
    std::cout << "Ooown, AAnimal Destroyed" << std::endl;
}

const std::string &AAnimal::getType() const
{
    return(this->type);
}
