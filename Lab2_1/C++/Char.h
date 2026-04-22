#ifndef CHARSTRING_H
#define CHARSTRING_H
#include "Class.h"

class CharString : public StringClass {
public:
    CharString();
    CharString(const std::string& val);
    CharString(const CharString& other);

    void sortDescending();
};

#endif 