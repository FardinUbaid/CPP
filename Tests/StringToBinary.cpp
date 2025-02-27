#include <iostream>
#include <string>
#include <bitset>

int main()
{

    std::string input;
    std::cout << "Enter a string:";
    std::getline(std::cin, input);

    for (char c : input)
    {

        std::cout << "Binaray of " << c << " is: ";
        std::cout << std::bitset<8>(c) << std::endl;
    }
    std::cout << std::endl;

    return 0;
}