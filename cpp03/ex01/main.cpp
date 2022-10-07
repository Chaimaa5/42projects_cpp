#include "ScavTrap.hpp"

int main()
{

	ScavTrap scav("svaavvvv");
    scav.attack("Someone");
    scav.takeDamage(6);
	scav.beRepaired(4);
	scav.takeDamage(3);
	scav.beRepaired(8);
	scav.takeDamage(17);


    ClapTrap clap("clapppp");
    clap.attack("Someone");
    clap.takeDamage(6);
	clap.beRepaired(4);
	clap.takeDamage(3);
	clap.beRepaired(8);
	clap.takeDamage(17);
}