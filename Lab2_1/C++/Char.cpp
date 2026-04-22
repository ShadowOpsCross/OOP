#include "Char.h"
#include <algorithm>

CharString::CharString() : StringClass() {}
CharString::CharString(const std::string& val) : StringClass(val) {}
CharString::CharString(const CharString& other) : StringClass(other) {}

void CharString::sortDescending() {
    std::sort(value.begin(), value.end(), std::greater<char>());
}