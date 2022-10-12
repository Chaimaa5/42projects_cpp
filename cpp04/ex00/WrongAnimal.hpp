#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(WrongAnimal const & A);
        WrongAnimal & operator=(WrongAnimal const & A);
        virtual ~WrongAnimal();
        virtual void    makeSound() const;
        const std::string &getType() const;
};
#endif
