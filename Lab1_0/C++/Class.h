#pragma once
#include <string>

class StringClass
{
public:
    std::string text;

    StringClass(std::string t);

    int length();
    void shiftRight();
};