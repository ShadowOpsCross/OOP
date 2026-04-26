#ifndef TEXTDOCUMENT_H
#define TEXTDOCUMENT_H
#include <vector>
#include "TextLine.h"
#include "ICharReplacer.h"

class TextDocument : public ICharReplacer {
private:
    std::vector<TextLine> lines;

public:
    void addLine(const TextLine& line);
    bool removeLine(int index);
    void clearText();
    int getTotalCharacters() const;
    int findStringCount(const std::string& searchStr) const;
    
    void replaceChar(char oldChar, char newChar) override;
    
    std::vector<std::string> getAllLines() const;
};

#endif