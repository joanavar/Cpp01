#pragma once
#include "Weapon.hpp"


class HumanA
{
private:
    std::string nameA;
    Weapon &weapon;

public:
    HumanA(std::string name, Weapon &weapon);
    ~HumanA();
    void    attack();
};

