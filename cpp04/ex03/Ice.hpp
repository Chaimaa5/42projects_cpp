#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
// #include "ICharacter.hpp"
class Ice: public AMateria{
     public:
        Ice();
        ~Ice();
        Ice & operator=(Ice & I);
        Ice(Ice & I);
        Ice(std::string const &type);
        std::string const & getType() const;
         AMateria* clone() const;
         void use(ICharacter & target);
};
#endif