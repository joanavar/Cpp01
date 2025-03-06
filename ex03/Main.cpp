#include "HumanB.hpp"
#include "HumanA.hpp"

int main()
{
    {
        Weapon club = Weapon("crude spike club");
        HumanA jon("jon", club);
        jon.attack();
        club.setType("C4");
        jon.attack();
    }
    {
        Weapon club = Weapon("crude spike club");
        HumanB joan("Joan");
        joan.attack();
        club.setType("C4");
        joan.attack();

    }


}