#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP
#include "ICharacter.hpp"


class Character: public ICharacter{
    private:
        std::string Name;
        AMateria* inventory[4];
    public:
        virtual ~Character();
        Character();
        Character(std::string Name);
        Character(Character & A);
        Character & operator=(Character & A);
        virtual const std::string  &getName() const;
        virtual void equip(AMateria *m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter & target); 
};

#endif