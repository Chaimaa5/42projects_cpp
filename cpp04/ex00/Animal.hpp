#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal{
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string type);
        Animal(Animal const & A);
        Animal & operator=(Animal const & A);
        virtual ~Animal();
        virtual void    makeSound() const;
        const std::string &getType() const;
};
#endif