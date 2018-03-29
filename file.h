#ifndef FILE_H_
#define FILE_H_
#include <string>
#include <fstream>
#include "includes.h"
namespace file
{
int file()
{
std::string filename;
std::cout <<"What would you like to name your file?\n";
std::cout << "(don't put in the .html)\n";
std::cin >> filename;
filename = filename +".html";
std::ofstream outf(filename);
return 0;
}

}
#endif 
