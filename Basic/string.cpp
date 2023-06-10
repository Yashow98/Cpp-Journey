#include <iostream>
#include <string>

int main()
{
    std::string str(20, '0');
    
    std::cout << str << std::endl;


    for (int i = 0; i < 20; ++i)
    {
        str[i] += i + 1;
    }

    std::cout << str << std::endl;

    return 0;
}