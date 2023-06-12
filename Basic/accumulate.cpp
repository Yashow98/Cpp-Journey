#include <iostream>
#include <numeric>
#include <vector>

int main()
{
    std::vector<int> v = {1, 2, 3, 4, 5};

    std::cout << "The sum is : " << std::accumulate(v.begin(), v.end(), 0) << std::endl;

    return 0;
}