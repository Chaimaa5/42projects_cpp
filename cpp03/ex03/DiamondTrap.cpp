#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap default Constructor called\n";
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called\n";
}

DiamondTrap::DiamondTrap(std::string name) 
{
    ClapTrap::name = name + "_clap_name";
    this->name = name;
    this->hit_point = FragTrap::hit_point;
    this->energy_point = ScavTrap::energy_point;
    this->attack_point = FragTrap::attack_point;
}

void    DiamondTrap::attack(std::string const & target)
{
    ScavTrap::attack(target);
}

void   DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap's name: " << name << " and ClapTrap's name " << ClapTrap::name << std::endl;
}