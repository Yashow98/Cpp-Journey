#include <iostream>

void check(bool arr[9])
{
    arr[0] = false;
    arr[1] = true;
}

int main()
{
    bool arr[9];

    check(arr);
    for (auto i : arr)
    {
        std::cout << i << std::endl;
    }
    
    return 0;
}