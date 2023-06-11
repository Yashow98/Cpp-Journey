#include <iostream>
#include <vector>

int main()
{
    std::vector<int> foo;
    int sz =  foo.capacity();
    std::cout << sz << std::endl;

    for (int i = 0; i < 10; ++i)
    {
        foo.push_back(i);
        if (sz != foo.capacity())
        {
            sz = foo.capacity();
            std::cout << "capacity changed: " << sz << std::endl; 
        }
    }

    std::cout << "*******************************************" << std::endl;

    std::vector<int> bar;
    int sz2 = bar.capacity();
    std::cout << sz2 << std::endl;
    bar.reserve(10);
    for (int i = 0; i < 10; ++i)
    {
        bar.push_back(i);
        if (sz2 != bar.capacity())
        {
            sz2 = bar.capacity();
            std::cout << "capacity changed: " << sz2 << std::endl; 
        }
    }


    return 0;
}