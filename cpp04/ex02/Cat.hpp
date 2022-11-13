#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
class Cat: public AAnimal{
    private:
        Brain *B;
    public:
        Cat();
        ~Cat();
        Cat(Cat const & C);
        Cat & operator=(Cat const & C);
        virtual void makeSound() const;
        Brain *getBrain() const;
        // virtual AAnimal & operator=(AAnimal const & A);

};

#endif