#pragma once

#include <new>
#include <string>
#include <iostream>
#include <ios>
#include <limits>

class Zombie
{
private:
    std::string name;
public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();

    void    announce();
};

Zombie* zombieHorde(int N, std::string name);
