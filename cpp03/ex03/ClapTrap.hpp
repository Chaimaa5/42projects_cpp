#ifndef CLAPTRAP_CPP
#define CLAPTRAP_CPP
#include <iostream>

class ClapTrap{
    protected:
        std::string name;
        int         hit_point;
        int         attack_point;
        int         energy_point;
    public:
        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        int     getHitPoint();
        int     getAttackPoint();
        int     getEnergyPoint();
        std::string   getName();
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap & C);
        ClapTrap & operator=(ClapTrap & C);
        ~ClapTrap();

};
#endif