#include <iostream>
#include <vector>

int main()
{
    int a = 2;
    int* p = &a;

    std::cout << "a = " << *p << std::endl;

    *p = 3;

    std::cout << "a = " << *p << std::endl;

    return 0;
}