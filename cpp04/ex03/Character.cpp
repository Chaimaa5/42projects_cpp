#include "Character.hpp"

Character::~Character(){
    //delete materia
}

Character::Character(){}

Character::Character(std::string Name) : Name(Name){

}

Character::Character(Character & A){
    (*this) = A;
}
Character & Character::operator=(Character & A){
    this->Name = A.Name;
    return ((*this));
}

std::string const & Character::getName() const{
    return (this->Name);
}

void Character::equip(AMateria *M){
    
}

void Character::unequip(int idx){
    
}

void Character::use(int idx, ICharacter & target){
    
}