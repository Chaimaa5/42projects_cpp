#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"
class Ice: public AMateria{
     public:
        Ice();
        ~Ice();
        Ice & operator=(Ice & I);
        Ice(Ice & I);
        std::string const & getType() const;
        virtual Ice* clone() const;
}
#endif