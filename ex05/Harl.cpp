#include "Harl.hpp"


Harl::Harl()
{
    std::cout << "Harl appeared !!\n";
}

Harl::~Harl()
{
    std::cout << std::endl << "Harl disappeared !\n";
}
void    Harl::debug()
{
    std::cout << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void    Harl::error()
{
    std::cout << std::endl << "This is unacceptable! I want to speak to the manager now.\n";
}

void    Harl::info()
{
    std::cout << std::endl << "I cannot believe adding extra bacon costs more money. ";
    std::cout << " You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void       Harl::warning()
{
    std::cout << std::endl << "I think I deserve to have some extra bacon for free. ";
    std::cout << "I’ve been coming for years whereas you started working here since last month.\n";

}

void    Harl::complain(std::string level)
{
    int i = 0;
    int j = 0;

    std::string message[4] = {"DEBUG", "WARNING", "INFO", "ERROR"};

    while (i < 4)
    {
        if (message[i] == level)
            j = i;
        i++;
    }
    switch (j)
    {
    case 0:
            Harl::debug();
            break;
    case 1:
            Harl::warning();
            break;
    case 2:
            Harl::info();
            break;
    case 3:
            Harl::error();
            break;
    default:
            std::cout << "there has been a problem\n";
    }
}

