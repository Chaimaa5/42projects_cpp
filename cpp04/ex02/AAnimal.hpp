#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include "Brain.hpp"

class AAnimal{
    protected:
        std::string type;
    public:
        virtual AAnimal & operator=(AAnimal const & A) = 0;
        virtual ~AAnimal();
        virtual void    makeSound() const = 0;
        const std::string &getType() const;
        virtual Brain *getBrain() const = 0;
};
#endif