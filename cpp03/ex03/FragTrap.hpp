#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap{
    public:
        void    highFivesGuys(void);
        FragTrap(std::string name);
        ~FragTrap( void );
    private:
        FragTrap();
};
#endif