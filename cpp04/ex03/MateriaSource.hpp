#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource: public IMateriaSource{
    private:
        AMateria *inventory[4];
    public:
        virtual ~MateriaSource();
        MateriaSource();
        MateriaSource(MateriaSource & M);
        MateriaSource & operator=(MateriaSource & M);
        virtual void learnMateria(AMateria *);
        virtual AMateria *createMateria(std::string const & type);
};

#endif