#include "MateriaSource.hpp"
MateriaSource::~MateriaSource(){}

MateriaSource::MateriaSource(){
    for (int i = 0; i < 4; i++)
    {
            inventory[i] = NULL;
    }
    
}

MateriaSource::MateriaSource(MateriaSource & M){
    (*this) = M;
}

MateriaSource & MateriaSource::operator=(MateriaSource & M){
    for(int i = 0; i < 4; i++)
        this->inventory[i]  = M.inventory[i];
    return (*this);
}

void MateriaSource::learnMateria(AMateria *M){
    for(int i = 0; i < 4; i++)
    {
        if (!this->inventory[i])
        {
            std::cout << "Learning AMateria " << i << std::endl; 
            this->inventory[i] = M->clone();
        }
        else
        {
            std::cout << "No more places to Learn Materia\n";
            break;
        }
    }
}

AMateria*  MateriaSource::createMateria(std::string const & type){
    for(int i = 0; i < 4; i++)
    {
        if (!this->inventory[i])
            return (NULL);
        else if (this->inventory[i]->getType() == type)
        {
            std::cout << "Creating AMateria " << type << " \n"; 
            return (this->inventory[i]->clone());
        }
    }
    return (NULL);
}