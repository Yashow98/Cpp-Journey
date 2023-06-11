#include <iostream>

class Test
{
public:
    int a = 10;
    static int b;
    Test()
    {
        ++b;
    }

    static int print()
    {
        return b;
    }

};

int Test::b = 100;

int main()
{
    Test t1;
    std::cout << t1.print() << std::endl; // 101

    Test t[5];  // 106
    Test t2;

    std::cout << t2.print() << std::endl;  // 107

    std::cout << Test::b << std::endl;

    return 0;

}