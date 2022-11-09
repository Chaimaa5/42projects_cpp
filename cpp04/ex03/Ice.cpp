#include "Ice.hpp"

Ice::Ice(){
    std::cout <<"Ice Constructed\n";
}

Ice::~Ice(){
    std::cout <<"Ice Destructed\n";
}

Ice & Ice::operator=(Ice & I){
    std::cout <<"Ice Assignment Operator\n";
    this->type = I.type;
    return ((*this));
}

Ice::Ice(Ice & I){
    std::cout <<"Ice Copy Constructor";
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