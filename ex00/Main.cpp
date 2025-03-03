#include "Zombie.hpp"

int main(void)
{
    Zombie *new_zombie;

    new_zombie = newZombie("Navarro");
    new_zombie->announce();
    randomChump("jon");
    delete new_zombie;
    return (0);
}