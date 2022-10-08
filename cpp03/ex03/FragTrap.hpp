#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap{
    public:
        void    highFivesGuys(void);
        FragTrap(std::string name);
        ~FragTrap( void );
    protected:
        FragTrap();
};
#endif