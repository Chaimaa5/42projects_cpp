#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
    for (int i = 0; i < 4; i++)
            inventory[i] = NULL;
}

MateriaSource::~MateriaSource(){
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i])
            delete this->inventory[i];
    }
}

MateriaSource::MateriaSource(MateriaSource & M){
    for (int i = 0; i < 4; i++)
            inventory[i] = NULL;
    (*this) = M;
}

MateriaSource & MateriaSource::operator=(MateriaSource & M){
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i])
            delete this->inventory[i];
    }
    for(int i = 0; i < 4; i++)
        this->inventory[i]  = M.inventory[i]->clone();
    return (*this);
}

void MateriaSource::learnMateria(AMateria *M){
    for(int i = 0; i < 4; i++)
    {
        if (!this->inventory[i])
        {
            std::cout << "Learning AMateria " << i << std::endl; 
            this->inventory[i] = M->clone();
            return ;
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
            std::cout << "Creating AMateria: " << type << " \n"; 
            return (this->inventory[i]->clone());
        }
    }
    return (NULL);
}