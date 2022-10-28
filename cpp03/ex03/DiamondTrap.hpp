#ifndef DIAMOND_HPP
#define DIAMOND_HPP
#include <iostream>
#include "FragTrap.hpp"

class DiamondTrap : public  FragTrap, public  ScavTrap{
    private:
        std::string name;
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap & D);
        DiamondTrap & operator=(DiamondTrap & D);
        ~DiamondTrap();
        void   whoAmI();
        void    attack(std::string const & target);

};
#endif