#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
    this->name = name;
    this->hit_point = 100;
    this->attack_point = 20;
    this->energy_point = 50;
}

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destroyed" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void    ScavTrap::attack(std::string const & target)
{
    if( this->energy_point > 0 || this->attack_point > 0)
    {
        this->energy_point -= 1;
        this->attack_point -= 1;
        std::cout << "ScavTrap " << this->name << " attacks "<<  target << ", causing him damage" << std::endl;
    }
    else
        std::cout << "ScavTrap " << this->name << " can't attack "<<  target << ", No energy points left! " << std::endl;
}