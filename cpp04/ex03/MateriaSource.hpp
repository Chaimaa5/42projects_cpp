#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource{
    public:
        virtual ~MateriaSource();
        MateriaSource();
        MateriaSource(MateriaSource & M);
        MateriaSource & operator=(MateriaSource & M);
        virtual void learnMateria(AMateria *);
        virtual AMateria *createMateria(std::string const & type);
}