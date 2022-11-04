#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : type(type){}

AMateria::AMateria(){}

AMateria::~AMateria(){}

AMateria::AMateria(AMateria & A){
    (*this) = A;
}

AMateria & AMateria::operator=(AMateria & A){
    this->type = A.type;
    return ((*this));
}

std::string const & AMateria::getType() const{
    return (this->type);
}

void AMateria::use(ICharacter & target){
    std::cout <<  "* shoots an ice bolt at " << target.getName() << " *" <<std::endl;
    std::cout <<  "* heals " << target.getName() << "'s wounds *" <<std::endl;

}