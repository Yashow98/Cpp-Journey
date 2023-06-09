#include <iostream>
#include <fstream>
#include <filesystem>

int main()
{
    // std::ifstream src("./foo.txt");
    // std::ofstream dst("./foo1.txt");
    // dst << src.rdbuf();

    // if cpp version >= cpp17
    std::filesystem::copy_file("./foo.txt", "./dst.txt");

    return 0;

}