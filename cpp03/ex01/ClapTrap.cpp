#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default  constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hit_point(100), attack_point(20), energy_point(50)
{
    std::cout << "ClapTrap: "<< name << " constructed" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destroyed" << std::endl;
}

void    ClapTrap::attack(const std::string& target)
{
    if( this->energy_point > 0 || this->hit_point > 0)
    {
        this->energy_point -= 1;
        std::cout << "ClapTrap " << this->name << " attacks "<<  target << ", causing him damage" << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->name << " can't attack "<<  target << ", No energy points left! " << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    this->hit_point -= amount;
    if( this->hit_point > 0)
        std::cout << "ClapTrap " << this->name << " takes Damage"  << ", of " << amount << " points! Only " <<  this->hit_point << " point are left" << std::endl;
    else
        std::cout << "ClapTrap " << this->name << " takes Damage"  << ", of " << amount << " points! He's got enough and quite unwell now "  << std::endl;

}
void    ClapTrap::beRepaired(unsigned int amount)
{
    this->energy_point -= 1;
    if( this->energy_point > 0)
    {
        this->hit_point += amount;
        std::cout << "ClapTrap " << this->name << " Repaired "  << amount << " points! Now he's got " <<  this->hit_point << " point left" <<  std::endl;        
    }
    else
        std::cout << "ClapTrap " << this->name << " can't repair "<<  ", No energy points left! " << std::endl;
}