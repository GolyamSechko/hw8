#include "Wine.h"
#include <valarray>
#include <string>
#include <iostream>

Wine::Wine(const char* l, int y, const int yr[], const int bot[]) : name(l), year(y), pair(ArrayIntT(y), ArrayIntT(y))
{
    for(int i = 0; i < y; i++) {
        pair.first()[i]  = yr[i];
        pair.second()[i] = bot[i];
    }
}

void Wine::getBottles()
{
    for (int i = 0; i < year; i++) {
        std::cout << "Enter the vintage year: ";
        std::cin >> pair.first()[i];
        std::cout << "Enter the number of bottles: ";
        std::cin >> pair.second()[i];
    }
}

int Wine::sum() const
{
    return pair.second().sum();
}

void Wine::show() const
{
    std::cout << "~~~~~\tWine -> " << name << "\t~~~~~" <<  std::endl;
    for (int i = 0 ; i < year; i++)
    {
        std::cout << "Year -> " << pair.first()[i] << "\tBottles -> " << pair.second()[i] << std::endl;
    }
}
