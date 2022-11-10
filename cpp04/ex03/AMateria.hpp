#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;
class AMateria{
    protected:
        std::string type;
    public:
        AMateria(std::string const & type);
        AMateria();
        virtual ~AMateria();
        AMateria(AMateria & A);
        AMateria & operator=(AMateria & A);
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter & target);
};



#endif