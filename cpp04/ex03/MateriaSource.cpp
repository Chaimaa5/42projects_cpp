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
    
}

AMateria*  MateriaSource::createMateria(std::string const & type){
    AMateria *M;
    return (M);
}