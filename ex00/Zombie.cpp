#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout << "zombie: " << name << " created !!" << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "zombie: " << name << " destroyed !!" << std::endl;
}

void    Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}