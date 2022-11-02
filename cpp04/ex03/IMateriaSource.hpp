#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "AMateria.hpp"
class IMateriaSource{
    public:
        virtual ~IMateriaSource();
        ~IMateriaSource();
        IMateriaSource(IMateriaSource & A);
        IMateriaSource & operator=(IMateriaSource & A);
        virtual void learnMateria(AMateria *) = 0;
        virtual AMateria createMateria(std::string const & type) = 0;
};
#endif