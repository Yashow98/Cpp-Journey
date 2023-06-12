#include <functional>
#include <algorithm>
#include <vector>
#include <iostream>
#include <numeric>

int main()
{
    int a[] = {1, 2, 3, 4};

    std::cout << std::accumulate(a, std::end(a), 0, std::bit_xor<int>());

    return 0;
}