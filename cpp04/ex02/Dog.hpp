#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal{
    private:
        Brain *B;
    public:
        Dog();
        ~Dog();
        Dog(Dog const & D);
        Dog & operator=(Dog const & D);
        virtual void makeSound() const;
        virtual Brain *getBrain() const;
        virtual AAnimal & operator=(AAnimal const & A);
};

#endif