#include "Cure.hpp"

Cure::Cure(){
    std::cout << "Cure Constructed\n";
}

Cure::~Cure(){
    std::cout << "Cure Destructed\n";
}

Cure & Cure::operator=(Cure & C){
    std::cout << "Cure Assignment Operator\n";
    this->type = C.type;
    return ((*this));
}

Cure::Cure(Cure & C){
    std::cout << "Copy Constructed\n";
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