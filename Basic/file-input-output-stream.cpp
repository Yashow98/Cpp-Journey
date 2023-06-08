#include <fstream>
#include <iostream>

int main()
{
    // writing file
    std::ofstream os("foo.txt");

    if (os.is_open())
    {
        os << "Hello world!" << std::endl;   // std::endl that combines writing a newline with flushing the stream
        // const char* data = "foo"; // overwrite
        // os.write(data, 3);
    }
    // if (os.bad())
        // std::cout << "Failed to write." << std::endl;
    
    // opening file 
    std::ifstream ifs("./foo.txt");

    std::string s;
    // while (ifs >> s)
    // {
        // std::cout << s << std::endl;
    // }

    // read a fixed number of characters
    // char str[4];
    // ifs.read(str, 3);

    // std::cout << str << std::endl;

    // read a file line by line
    while (std::getline(ifs, s))
    {
        std::cout << s;
    }
    

    return 0;
}