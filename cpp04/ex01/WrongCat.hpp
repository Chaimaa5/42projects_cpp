#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal{
    public:
        WrongCat();
        virtual ~WrongCat();
        WrongCat(WrongCat const & C);
        WrongCat & operator=(WrongCat const & C);
        void makeSound() const;
};

#endif