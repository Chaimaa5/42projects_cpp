#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
    public:
        void    guardGate();
        void    attack(std::string const & target);
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap & C);
        ScavTrap & operator=(ScavTrap & C);
        ~ScavTrap( void );
};
#endif