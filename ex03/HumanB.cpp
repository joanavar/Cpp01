#include "HumanB.hpp"


HumanB::HumanB(std::string name)
{
    this->nameB = name;
    this->is_armed = false;
    std::cout << "HumanB: " << nameB << " creted.\n";
}

HumanB::~HumanB()
{
    std::cout << "HumanB: " << this->nameB << " died.\n";
}

void    HumanB::attack()
{
    if (this->is_armed == false)
        std::cout << this->nameB << "he doesnt have a gun\n";
    else
        std::cout << this->nameB << " attacks with their " << this->weapon->getType() << std::endl;
}
void    HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
    this->is_armed = true;
}