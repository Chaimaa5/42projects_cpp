#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
    public:
        void    guardGate();
        void    attack(std::string const & target);
        ScavTrap(std::string name);
        ~ScavTrap( void );
    private:
        ScavTrap();
};
#endif