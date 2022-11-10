#include "Character.hpp"

#include <iostream>
Character::~Character(){
    std::cout << "Character Destructed\n";
}

Character::Character(){
     for(int i = 0; i < 4 ; i++)
    {
        if (!this->inventory[i])
            this->inventory[i] = NULL;
    }
}

Character::Character(std::string Name) : Name(Name){
    std::cout << "Character " << Name <<" Constructed\n";
    for(int i = 0; i < 4 ; i++)
       {
           if (!this->inventory[i])
           {
               this->inventory[i] = NULL;
           }
       }
}

Character::Character(Character & A){
    (*this) = A;
}
Character & Character::operator=(Character & A){
    this->Name = A.Name;
    return ((*this));
}

const std::string  & Character::getName() const{
    return (this->Name);
}

void Character::equip(AMateria *M){
    for(int i = 0; i < 4 ; i++)
    {
        if (!this->inventory[i])
            this->inventory[i] = M;
    }
}

void Character::unequip(int idx){
    if (idx >= 0 && idx < 4)
        this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter & target){
    if (idx >= 0 && idx < 4)
    {
        if (this->inventory[idx])
            // std::cout << target.getName()  << idx;
            this->inventory[idx]->use(target);
    }
}