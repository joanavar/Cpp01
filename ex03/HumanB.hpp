#pragma once
#include "Weapon.hpp"

class HumanB
{
private:
    
    std::string nameB;
    bool        is_armed;
    Weapon     *weapon;

public:
    HumanB(std::string name);
    ~HumanB();
    void    attack();
    void    setWeapon(Weapon &weapon);

};


