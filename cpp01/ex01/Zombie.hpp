#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string.h>

class Zombie{
    private:
        std::string name;
    public:
        void announce(void);
        std::string    getname();
        void    setname(std::string name);
        Zombie(){std::cout << "zombie constructed\n";};
        ~Zombie(){std::cout << "zombie destructed\n";};
};

Zombie  *zombieHorde(int N, std::string name);


#endif