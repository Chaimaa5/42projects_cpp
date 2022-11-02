#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"
class Cure: public AMateria{
    public:
        Cure();
        ~Cure();
        Cure & operator=(Cure & C);
        Cure(Cure & C);
        std::string const & getType() const;
        virtual Cure* clone() const;
}
#endif