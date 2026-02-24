#include <iostream>
#include "Class.h"

int main()
{
    std::string input;
    std::cout << "Enter a string line: ";
    std::cin >> input;

    StringClass s(input);
    std::cout << s.text << std::endl;
    std::cout << s.length() << std::endl;

    s.shiftRight();
    std::cout << s.text << std::endl;

    return 0;
}