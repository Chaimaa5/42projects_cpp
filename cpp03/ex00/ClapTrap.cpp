#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default  constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hit_point(10), attack_point(0), energy_point(10)
{
    std::cout << "ClapTrap: "<< name << " constructed" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destroyed" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap & C)
{
    std::cout << "ClapTrap Copy Constructor is called for" << C.name << std::endl;
    this->name = C.name;
    this->energy_point = C.energy_point;
    this->attack_point = C.attack_point;
    this->hit_point = C.hit_point;
}

ClapTrap & ClapTrap::operator=(ClapTrap & C)
{
    std::cout << "ClapTrap Assignment operator is called for" << C.name << std::endl;
    return (*this);
}

void    ClapTrap::attack(const std::string& target)
{
    if( this->energy_point > 0 || this->hit_point > 0)
    {
        this->energy_point -= 1;
        std::cout << "ClapTrap " << this->name << " attacks "<<  target << ", causing him damage"  << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->name << " can't attack "<<  target << ", No energy points left! " << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    this->hit_point -= amount;
    if(this->hit_point > 0)
        std::cout << "ClapTrap " << this->name << " takes Damage"  << ", of " << amount << " points! Only " <<  this->hit_point << " point are left" << std::endl;
    else
        std::cout << "ClapTrap " << this->name << " takes Damage"  << ", of " << amount << " points! He's got enough and quite unwell now "  << std::endl;

}
void    ClapTrap::beRepaired(unsigned int amount)
{
    if(this->energy_point > 0 && this->hit_point > 0)
    {
        this->energy_point -= 1;
        this->hit_point += amount;
        std::cout << "ClapTrap " << this->name << " Repaired "  << amount << " points! Now he's got " <<  this->hit_point << " point left" <<  std::endl;        
    }
    else
        std::cout << "ClapTrap " << this->name << " can't repair "<<  ", No energy points left! " << std::endl;
}