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
    for(int i = 0; i < 4 ; i++)
    {
        if (!this->inventory[i])
        {
            this->inventory[i] = M;
        }
    }
}

void Character::unequip(int idx){
    if (idx >=0 && idx < 4)
        this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter & target){
    if (idx <= 0 && idx < 4)
    {
        this->inventory[idx]->use(target);
    }
}