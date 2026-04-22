#ifndef CLASS_H
#define CLASS_H
#include <string>

class StringClass {
protected:
    std::string value;

public:
    StringClass();
    StringClass(const std::string& val);
    StringClass(const StringClass& other);

    int getLength() const;
    std::string getValue() const;
};

#endif