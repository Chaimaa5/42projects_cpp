#include "Ice.hpp"

Ice::Ice(){std::cout <<"hello";}

Ice::~Ice(){}

Ice & Ice::operator=(Ice & I){
    this->type = I.type;
    return ((*this));
}

Ice::Ice(Ice & I){
    (*this) = I;
}

std::string const & Ice::getType() const{
    return (this->type);
}

AMateria* Ice::clone() const{
    AMateria *I = new Ice;
    
    return (I);    
}

void Ice::use(ICharacter & target){
    std::cout <<  "Ice: * shoots an ice bolt at " << target.getName() << " *" <<std::endl;
}