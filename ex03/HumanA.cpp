#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon):
    weapon(weapon)
{
    this->nameA = name;
    this->weapon = weapon;

    std::cout << "HumanA: " << name << "is created\n";

}

HumanA::~HumanA()
{
    std::cout << "HumanA: " << this->nameA << "is died.\n";
}
void    HumanA::attack()
{
    std::cout << this->nameA <<  " attacks with their " << this->weapon.getType() << std::endl;
}