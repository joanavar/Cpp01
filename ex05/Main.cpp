#include "Harl.hpp"

int Harl_translate(char *argv)
{
    int i = 0;
    std::string levels[4] = {"DEBUG", "WARNING", "INFO", "ERROR"};
    while (i < 4)
    {
        if (levels[i] == argv)
            return (1);
        i++;
    }
    return (0);
}

int level_translate(std::string level)
{
    int i = 0;
    std::string message[4] = {"DEBUG", "WARNING", "INFO", "ERROR"};

    while (i < 4)
    {
        if (message[i] == level)
            return (i);
    }
    return (0);
}

void Harl_Switch(char *argv, Harl &H)
{
    switch (Harl_translate(argv))
    {
    case 1:
        H.complain(argv);
        break;
    default:
        std::cout << "Problems with Harl\n";
    }
}
int main(int argc, char **argv)
{
    Harl H;

    if (argc != 2)
        std::cout << "Invalid arguments\n";
    else
        Harl_Switch(argv[1], H);
}