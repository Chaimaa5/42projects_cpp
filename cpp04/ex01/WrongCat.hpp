#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{
    public:
        WrongCat();
        ~WrongCat();
        WrongCat(WrongCat const & C);
        WrongCat & operator=(WrongCat const & C);
        virtual void makeSound() const;
};

#endif