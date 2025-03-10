#include <iostream>


int main()
{

    std::string string= "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout << "<Memory address>" << std::endl;

    std::cout <<std::endl << "The memory address of string: " << &string << std::endl;
    std::cout << "The memory address of stringPTR: " << &stringPTR << std::endl;
    std::cout << "The memory address of stringREF: " << &stringREF << std::endl;

    std::cout <<std::endl << "<values>" << std::endl;

    std::cout <<std::endl << "value of string: " << string << std::endl;
    std::cout << "value of stringPTR: " << stringPTR << std::endl;
    std::cout << "value of stringREF: " << stringREF << std::endl;
    
    return (0);

}

