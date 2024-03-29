#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include "Brain.hpp"
class Animal{
    protected:
        std::string type;
    public:
        Animal(std::string type);
        Animal();
        Animal(Animal const & A);
        Animal & operator=(Animal const & A);
        virtual ~Animal();
        virtual void    makeSound() const;
        const std::string &getType() const;
};
#endif