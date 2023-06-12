#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::cout << std::max(1, 2) << std::endl;

    std::vector<int> v = {1, 0, 3, 3, 5};
    std::cout << "The max element of v is : " << *std::max_element(v.begin(), v.end()) << std::endl;

    return 0;
}