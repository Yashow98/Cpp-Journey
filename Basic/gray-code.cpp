#include <iostream>
#include <bitset>

int main()
{
    int a = 2;
    int gray_code = a ^ (a >> 1);

    std::cout << gray_code << std::endl;
    std::cout << std::bitset<8>(gray_code) << std::endl;

    return 0;
}