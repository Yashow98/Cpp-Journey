#include <iostream>

int main()
{
    double a = 0.1;  // 0011111110111001100110011001100110011001100110011001100110011010
    double b = 0.2;  // 0011111111001001100110011001100110011001100110011001100110011010
    double c = 0.3;  // 0011111111010011001100110011001100110011001100110011001100110011

    if (c == a + b)  // a + b = 0011111111010011001100110011001100110011001100110011001100110100 is not equal to 0.3
        std::cout << "This computer is magic!" << std::endl;
    else
        std::cout << "This computer is pretty normal, all things considered." << std::endl;
    
    return 0;
}