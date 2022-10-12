#ifndef DIAMOND_HPP
#define DIAMOND_HPP
#include <iostream>
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap{
    private:
        std::string name;
    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        ~DiamondTrap();
        void   whoAmI();
        void    attack(std::string const & target);

};
#endif