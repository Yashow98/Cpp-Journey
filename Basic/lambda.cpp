#include <iostream>

int main()
{
    int a = 0;

    // auto bad_counter = [a] {return a++;}; // error const by default
    auto good_counter = [a] mutable {return a++;};
    
    // std::cout << bad_counter() << std::endl;

    std::cout << good_counter() << std::endl;
    std::cout << good_counter() << std::endl;
    std::cout << good_counter() << std::endl;
    
    return 0;
}