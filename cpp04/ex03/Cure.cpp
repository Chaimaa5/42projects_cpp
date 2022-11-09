#include "Cure.hpp"

Cure::Cure(){}

Cure::~Cure(){}

Cure & Cure::operator=(Cure & C){
    this->type = C.type;
    return ((*this));
}

Cure::Cure(Cure & C){
    (*this) = C;
}

std::string const & Cure::getType() const{
    return (this->type);
}

AMateria* Cure::clone() const{
    AMateria *C = new Cure;

    return (C);    
}

void Cure::use(ICharacter & target){
    std::cout <<  "Cure: * heals " << target.getName() << "'s wounds *" <<std::endl;
}