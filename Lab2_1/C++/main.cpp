#include <iostream>
#include "Char.h"

int main() {
    CharString myString("University");\

    std::cout << "String: " << myString.getValue() << std::endl;
    std::cout << "Lenght: " << myString.getLength() << std::endl;

    myString.sortDescending();
    std::cout << "After sorting: " << myString.getValue() << std::endl;

    return 0;
}