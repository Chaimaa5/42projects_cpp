#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap{
    public:
        void    highFivesGuys(void);
        FragTrap();
        FragTrap(std::string name);
        FragTrap(FragTrap & F);
        FragTrap & operator=(FragTrap & F);
        ~FragTrap( void );
};
#endif