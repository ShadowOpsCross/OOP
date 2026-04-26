#include "TextDocument.h"

void TextDocument::addLine(const TextLine& line) {
    lines.push_back(line);
}

bool TextDocument::removeLine(int index) {
    if (index >= 0 && index < lines.size()) {
        lines.erase(lines.begin() + index);
        return true;
    }
    return false;
}

void TextDocument::clearText() {
    lines.clear();
}

int TextDocument::getTotalCharacters() const {
    int total = 0;
    for (const auto& line : lines) {
        total += line.getLength();
    }
    return total;
}

int TextDocument::findStringCount(const std::string& searchStr) const {
    int count = 0;
    for (const auto& line : lines) {
        std::string s = line.getText();
        size_t pos = s.find(searchStr);
        while (pos != std::string::npos) {
            count++;
            pos = s.find(searchStr, pos + searchStr.length());
        }
    }
    return count;
}

void TextDocument::replaceChar(char oldChar, char newChar) {
    for (auto& line : lines) {
        line.replaceChar(oldChar, newChar);
    }
}

std::vector<std::string> TextDocument::getAllLines() const {
    std::vector<std::string> result;
    for (const auto& line : lines) {
        result.push_back(line.getText());
    }
    return result;
}