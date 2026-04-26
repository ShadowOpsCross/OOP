#ifndef TEXTLINE_H
#define TEXTLINE_H
#include <string>
#include "ICharReplacer.h"

class TextLine : public ICharReplacer {
private:
    std::string text;

public:
    TextLine(const std::string& t);
    
    std::string getText() const;
    int getLength() const;
    
    void replaceChar(char oldChar, char newChar) override;
};

#endif