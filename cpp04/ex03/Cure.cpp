#include "Cure.hpp"

Cure::Cure(){}

Cure::~Cure(){}

Cure & Cure::operator=(Cure & C){
    return ((*this));
}

Cure::Cure(Cure & C){
    (*this) = C;
}

std::string const & Cure::getType() const{
    return (this->type);
}

Cure* Cure::clone() const{
    Cure *C = new Cure;

    return (C);    
}