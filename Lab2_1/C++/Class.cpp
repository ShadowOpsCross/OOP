#include "Class.h"

StringClass::StringClass() : value("") {}
StringClass::StringClass(const std::string& val) : value(val) {}
StringClass::StringClass(const StringClass& other) : value(other.value) {}

int StringClass::getLength() const {
    return value.length();
}

std::string StringClass::getValue() const {
    return value;
}