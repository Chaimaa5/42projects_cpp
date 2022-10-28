#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Default Constructor called\n";
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap & F)
{
    std::cout << "FragTrap Copy Constructor called\n";
    (*this) = F;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap Name Constructor called\n";
    this->name = name;
    this->hit_point = 100;
    this->attack_point = 30;
    this->energy_point = 100;
}

FragTrap & FragTrap::operator=(FragTrap & F)
{
    std::cout << "FragTrap Assignment operator called\n";
    this->name = F.getName();
    this->hit_point = F.getHitPoint();
    this->energy_point = F.getEnergyPoint();
    this->attack_point = F.getAttackPoint();    
    return ((*this));
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "a positive high fives request\n";
}
