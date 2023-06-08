#include <iostream>

int main()
{
    unsigned int count = 0;
    int value = 6;

    while (value)
    {
        count += value & 1;
        value >>= 1;
    }

    std::cout << "The bits set of value is " << count << std::endl;

    return 0;
    
}