#include "MateriaSource.hpp"

MateriaSource::~MateriaSource(){}

MateriaSource::MateriaSource(){}

MateriaSource::MateriaSource(MateriaSource & M){
    (*this) = M;
}

MateriaSource & MateriaSource::operator=(MateriaSource & M){
    return (*this);
}

void MateriaSource::learnMateria(AMateria *M){
    for(int i = 0; i < 4; i++)
    {
        if (!this->inventory[i])
        {
            this->inventory[i] = M->clone();
        }
    }
}

AMateria*  MateriaSource::createMateria(std::string const & type){
    for(int i = 0; i < 4; i++)
    {
        if (!this->inventory[i])
            return (NULL);
        if (this->inventory[i]->getType() == type)
        {
            return (this->inventory[i]->clone());
        }
    }
}