#include <iostream>
#include <unordered_map>
#include <string>

int main()
{
    std::unordered_map<std::string, int> person = {
        {"Mike", 20}, 
        {"Jack", 30}, 
    };

    person.at("Mike") = 22;

    for (auto& item : person)
    {
        std::cout << item.first << ", " << item.second << std::endl;
    }

    std::cout << "********************" << std::endl;

    std::pair<std::string, int> jeff("Jeff", 40);
    person.insert(jeff);
    person.insert({"Ross", 28});

    for (auto [k, v] : person)
    {
        std::cout << k << ", " << v << std::endl;
    }

    return 0;
}