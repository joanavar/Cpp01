#include "Zombie.hpp"

Zombie  *newZombie(std::string name)
{
    Zombie *new_zombie;

    new_zombie = new Zombie("Navarro");
    return (new_zombie);
}
