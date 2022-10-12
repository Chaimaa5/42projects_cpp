#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap Default Constructor called\n";
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap Name Constructor called\n";
    this->name = name;
    this->hit_point = 100;
    this->attack_point = 30;
    this->energy_point = 100;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "a positive high fives request\n";
}
