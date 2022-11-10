#include "Character.hpp"

#include <iostream>
Character::~Character(){
    for(int i = 0; i < 4 ; i++)
    {
        if (!this->inventory[i])
            delete this->inventory[i];
    }
    // std::cout << "Character Destructed\n";
}

Character::Character()
{
    Name = "Someone";
     for(int i = 0; i < 4 ; i++)
        this->inventory[i] = NULL;
}

Character::Character(const std::string & Name) : Name(Name){
    std::cout << "Character " << Name <<" Constructed\n";
    for(int i = 0; i < 4 ; i++)
        this->inventory[i] = NULL;
}

Character::Character(const Character & A){
    for(int i = 0; i < 4 ; i++)
        this->inventory[i] = NULL;
    (*this) = A;
}
Character & Character::operator=(const Character & C){
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i])
            delete this->inventory[i];
    }
    for(int i = 0; i < 4 ; i++)
        this->inventory[i] = C.inventory[i]->clone();
    this->Name = C.Name;
    return ((*this));
}

std::string const  & Character::getName() const{
    return (this->Name);
}

void Character::equip(AMateria *M){
    for(int i = 0; i < 4 ; i++)
    {
        if (!this->inventory[i])
        {
            this->inventory[i] = M;
            std::cout << this->getName() << " equipped <" << this->inventory[i]->getType() <<">\n";			
            return ;
        }
    }
}

void Character::unequip(int idx){
    if (idx >= 0 && idx < 4)
        this->inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter & target){
    if ((idx >= 0 && idx < 4) && this->inventory[idx])
        this->inventory[idx]->use(target);
}