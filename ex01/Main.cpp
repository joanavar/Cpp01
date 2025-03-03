#include "Zombie.hpp"

int main()
{
    Zombie *horde;
    int size = 0;
    int i = 0;

    std::cout << "Enter size horde: " << std::endl;
    if (!(std::cin >> size))
    {
        std::cout << std::endl << "Invalid size" << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    horde = zombieHorde(size, "Zombie");
    while (i < size)
    {
        std::cout << "Index: " << i << " the: " << size << std::endl;
        horde[i].announce();
        i++;        
    }
    delete[] horde;
    return (0);
}