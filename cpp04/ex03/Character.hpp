#include "ICharacter.hpp"
class Character: public ICharacter{
    private:
        std::string Name;
        AMateria    M[4];
    public:
        virtual ~Character();
        Character();
        Character(std::string Name);
        Character(Character & A);
        Character & operator=(Character & A);
        virtual std::string const &getName() const;
        virtual void equip(AMateria *m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter & target); 
};