#include <iostream>
#include <vector> 
#include <algorithm>

int main()
{
    std::vector<int> v(8);

    for (auto i : v)
        std::cout << i << " ";
    
    std::cout << std::endl;

    std::fill(v.begin(), v.end(), 5);

    for (auto i : v)
        std::cout << i << " ";
    
    std::cout << std::endl;

    return 0;
}