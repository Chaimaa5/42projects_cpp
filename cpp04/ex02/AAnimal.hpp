#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include "Brain.hpp"

class AAnimal{
    protected:
        std::string type;
        AAnimal(std::string type);
    public:
        AAnimal();
        virtual AAnimal & operator=(AAnimal const & A);
        virtual ~AAnimal() = 0;
        virtual void    makeSound() const;
        const std::string &getType() const;
};
#endif