#include <iostream>
#include <cmath>

int main()
{
    int n = 4;
    const double s = sqrt(5);

    int a_n = floor((pow((1 + s) / 2, n) - pow((1 - s) / 2, n)) / s + 0.5);

    std::cout << a_n << std::endl;

    return 0;  
}