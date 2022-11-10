#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "ICharacter.hpp"
#include <iostream>

class Character: public ICharacter{
    private:
        std::string Name;
        AMateria* inventory[4];
    public:
         ~Character();
        Character();
        Character(const std::string  & Name);
        Character(const Character & A);
        Character & operator=(const Character & op);
         std::string  const &getName() const;
         void equip(AMateria *m);
         void unequip(int idx);
         void use(int idx, ICharacter & target); 
};

#endif