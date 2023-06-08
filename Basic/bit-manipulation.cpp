#include <iostream>
#include <bitset>

template <typename T>
T remove_rightmost_set_bit(T n)
{
    return n & (n - 1);
}

int main()
{
    int a = 7;
    int b = remove_rightmost_set_bit(a);

    std::cout << b << std::endl;
    std::cout << "a = " << std::bitset<8>(a) << std::endl;
    std::cout << "b = " << std::bitset<8>(b) << std::endl;

    // set all bits
    int x = -1;
    std::cout << "x = " << std::bitset<8>(x) << std::endl;

    return 0;

}