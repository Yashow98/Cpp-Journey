#include <iostream>

int main()
{
    int a = 4;
    int c = a++ / 2;

    std::cout << "c = " << c << std::endl;
    std::cout << "a = " << a << std::endl;

    int d = ++a / 2;
    
    std::cout << "d = " << d << std::endl;
    std::cout << "a = " << a << std::endl;

    int arr[4] = {1, 2, 3, 4};
    int* ptr1 = arr;
    int* ptr2 = ptr1++;

    std::cout << *ptr1++ << std::endl; // 2
    std::cout << *ptr1 << std::endl;   // 3
    std::cout << *ptr2 << std::endl;   // 1


    return 0;

}