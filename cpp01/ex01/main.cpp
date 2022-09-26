#include "Zombie.hpp"

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

int main()
{
    Zombie *zombie;

    zombie = zombieHorde(10, "zombie");
    delete(zombie);
}