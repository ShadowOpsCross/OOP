#include "Class.h"

StringClass::StringClass(std::string t)
{
    text = t;
}

int StringClass::length()
{
    return text.length();
}

void StringClass::shiftRight()
{
    if (text.length() <= 1)
        return;

    char last = text[text.length() - 1];
    text = last + text.substr(0, text.length() - 1);
}