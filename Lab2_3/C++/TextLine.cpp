#include "TextLine.h"

TextLine::TextLine(const std::string& t) : text(t) {}

std::string TextLine::getText() const {
    return text;
}

int TextLine::getLength() const {
    return text.length();
}

void TextLine::replaceChar(char oldChar, char newChar) {
    for (char& c : text) {
        if (c == oldChar) {
            c = newChar;
        }
    }
}