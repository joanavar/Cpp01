#include <fstream>
#include <iostream>


int    replace(char **argv, std::string str)
{
    int i = 0;
    std::ofstream outfile;
    int pos;
    outfile.open((std::string(argv[1]) + ".replace").c_str());
    if (outfile.fail())
        return (1);
    while (i < str.size())
    {
        if (!argv[2])
            return (1);
        pos = str.find(argv[2], i);
        if (pos != std::string::npos && pos == i)
        {
            outfile << argv[3];
            i += std::string(argv[2]).size() - 1;
        }
        else
            outfile << str[i];
        i++;
    }
    outfile.close();
    return (0);
}


int main(int argc, char **argv)
{
    char          c;
    std::ifstream infile;
    std::string   str;
    int           res;

    if (argc != 4)
	{
		std::cout << "usage: replace <file> old_word new_word" << std::endl;
		return (1);
	}
    infile.open(argv[1]);
    if (infile.fail())
    {
        std::cout << "Error a la hora de abrir archivo: " << argv[1] << std::endl;
        return (0);
    }
    while (!infile.eof() && infile >> std::noskipws >> c)
    {
        str = str + c;
    }
    infile.close();
    res = replace(argv, str);
    return (res);

}
