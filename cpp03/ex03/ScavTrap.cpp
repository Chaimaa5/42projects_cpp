#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap Name constructor called" << std::endl;
    this->name = name;
    this->hit_point = ClapTrap::hit_point;
    this->attack_point = ClapTrap::attack_point;
    this->energy_point = ClapTrap::energy_point;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destroyed" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap & S)
{
    std::cout << "ScavTrap Copy Constructor called" << std::endl;
    (*this) = S;
}

ScavTrap & ScavTrap::operator=(ScavTrap & C)
{
    std::cout << "ScavTrap Assignment operator called" << std::endl;
    this->name = C.getName();
    this->hit_point = C.getHitPoint();
    this->energy_point = C.getEnergyPoint();
    this->attack_point = C.getAttackPoint();    
    return ((*this));
}

void    ScavTrap::attack(std::string const & target)
{
    if( this->energy_point > 0 || this->hit_point > 0)
    {
        this->energy_point -= 1;
        std::cout << "ScavTrap " << this->name << " attacks "<<  target << ", causing him damage" << std::endl;
    }
    else
        std::cout << "ScavTrap " << this->name << " can't attack "<<  target << ", No energy points left! " << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}