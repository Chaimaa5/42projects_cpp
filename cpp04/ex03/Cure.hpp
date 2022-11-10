#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"

class Cure : public AMateria{
    public:
        Cure();
        ~Cure();
        Cure(std::string const &type);
        Cure & operator=(Cure & C);
        Cure(Cure & C);
        std::string const & getType() const;
         AMateria* clone() const;
         void use(ICharacter & target);
};
#endif