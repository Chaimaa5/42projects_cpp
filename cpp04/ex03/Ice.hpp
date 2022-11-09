#ifndef ICE_HPP
#define ICE_HPP
#include "Cure.hpp"
#include "ICharacter.hpp"

class Ice: public AMateria{
     public:
        Ice();
        ~Ice();
        Ice & operator=(Ice & I);
        Ice(Ice & I);
        std::string const & getType() const;
        virtual AMateria* clone() const;
        virtual void use(ICharacter & target);
};
#endif