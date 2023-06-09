#include <iostream>
#include <fstream>
#include <vector>
#include <iterator>

int main()
{
    // std::vector<std::string> v;

    std::ifstream ifs("./foo.txt");

    std::vector<std::string> v(std::istream_iterator<std::string>{ifs}, 
                                std::istream_iterator<std::string>{});
    // std::string s;
    // while (ifs >> s)
    // {
    //     v.push_back(s);
    // }
    
    for (auto i : v)
    {
        std::cout << i << std::endl;
    }

    return 0;
}