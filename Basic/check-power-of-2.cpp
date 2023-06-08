#include <iostream>

int main()
{
    int value = 6;
    if (!(value & (value - 1)))
        std::cout << "The value is a power of 2." << std::endl;
    else
        std::cout << "The value is not a power of 2." << std::endl;


    return 0;
}