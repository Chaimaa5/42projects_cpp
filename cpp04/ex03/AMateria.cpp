#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : type(type){}

AMateria::AMateria(){}

AMateria::~AMateria(){}

AMateria::AMateria(AMateria & A){
    (*this) = A;
}

AMateria & AMateria::operator=(AMateria & A){
    return ((*this));
}

std::string const & AMateria::getType() const{
    return (this->type);
}

AMateria* AMateria::clone() const{}

void AMateria::use(ICharacter & target){}