#include "DiamondTrap.hpp"

int main()
{
    std::cout << "------------------------------DiamondTrap------------------------------ "<< std::endl;
    {
        DiamondTrap	diamond("Fri5olito");
		diamond.attack("Di4mond");
		diamond.takeDamage(5);
		diamond.beRepaired(2);
		diamond.takeDamage(4);
		diamond.highFivesGuys();
		diamond.guardGate();
		diamond.whoAmI();
    }
    std::cout << "------------------------------FragTrap------------------------------ "<< std::endl;
 	{
        FragTrap	Fr4gito("Fr4gito");
		Fr4gito.attack("Fr4g");
		Fr4gito.takeDamage(5);
		Fr4gito.beRepaired(2);
		Fr4gito.takeDamage(4);
		Fr4gito.highFivesGuys();
    }
    std::cout << "------------------------------ScavTrap------------------------------ "<< std::endl;
 	{
        ScavTrap	Sc4vito("Sc4vito");
		Sc4vito.attack("Sc4vitoss");
		Sc4vito.takeDamage(5);
		Sc4vito.beRepaired(2);
		Sc4vito.takeDamage(4);
		Sc4vito.guardGate();
    }
    std::cout << "------------------------------ClapTrap------------------------------ "<< std::endl;
	{
        ClapTrap	Cl4apito("Cl4apito");
		Cl4apito.attack("Cl4apitoss");
		Cl4apito.takeDamage(5);
		Cl4apito.beRepaired(2);
		Cl4apito.takeDamage(4);
    }
}