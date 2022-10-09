#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal{
    public:
        Dog();
        ~Dog();
        Dog(Dog const & D);
        Dog & operator=(Dog const & D);
        virtual void makeSound() const;

};

#endif