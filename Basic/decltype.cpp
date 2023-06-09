#include <vector>
#include <iostream>

int main()
{
    int a = 20;

    std::vector<decltype(a)> v(10, a);  // declare type of a. yields the type of its operand

    for (auto i : v)
        std::cout << i << " ";

    std::cout << std::endl;

    return 0;

}