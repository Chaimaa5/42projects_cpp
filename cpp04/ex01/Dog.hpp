#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal{
    private:
        Brain *B;
    public:
        Dog();
        ~Dog();
        Dog(Dog const & D);
        Dog & operator=(Dog const & D);
        virtual void makeSound() const;
        virtual Brain *getBrain() const;
};

#endif