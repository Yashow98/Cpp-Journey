#include <iostream>

int main()
{
    int lval = 0xfedcba98 << 32;
    int aval = 0xfedcba98 >> 36;
    unsigned uval = 0xfedcba98u >> 40;
    unsigned long long int x = 1ull << 32;

    std::cout << x << std::endl;
    std::cout << lval << std::endl;
    std::cout << aval << std::endl;
    std::cout << uval << std::endl;

    return 0;
}