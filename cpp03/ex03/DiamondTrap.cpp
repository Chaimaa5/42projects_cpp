#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap default Constructor called\n";
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called\n";
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name")
{
    std::cout << "DiamondTrap Parametrized Constructor called\n";
    this->name = name;
    ClapTrap::name = name + "_clap_name";
    this->hit_point = FragTrap::hit_point;
    this->energy_point = ScavTrap::energy_point;
    this->attack_point = FragTrap::attack_point;
    std::cout << FragTrap::attack_point << std::endl;
    std::cout << ScavTrap::attack_point << std::endl;

}

DiamondTrap::DiamondTrap(DiamondTrap & D)
{
    std::cout << "DiamondTrap Copy Constructor called\n";
    (*this) = D;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap & D)
{
    std::cout << "DiamondTrap Assignment Operator called\n";
    this->name = D.getName();
    this->hit_point = D.getHitPoint();
    this->energy_point = D.getEnergyPoint();
    this->attack_point = D.getAttackPoint();   
    return ((*this));
}

void    DiamondTrap::attack(std::string const & target)
{
    ScavTrap::attack(target);
}

void   DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap's name: " << name << " and ClapTrap's name " << ClapTrap::name << std::endl;
}