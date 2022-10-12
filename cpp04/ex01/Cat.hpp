#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
class Cat: public Animal{
    private:
        Brain *B;
    public:
        Cat();
        ~Cat();
        Cat(Cat const & C);
        Cat & operator=(Cat const & C);
        virtual void makeSound() const;
        virtual Brain *getBrain() const;
};

#endif