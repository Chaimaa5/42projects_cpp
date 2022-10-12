#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal{
    public:
        Cat();
        ~Cat();
        Cat(Cat const & C);
        Cat & operator=(Cat const & C);
        virtual void makeSound() const;
};

#endif