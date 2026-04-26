#include <iostream>
#include "TextDocument.h"

void printDocument(const TextDocument& doc) {
    std::cout << "--- Document Text ---" << std::endl;
    for (const auto& str : doc.getAllLines()) {
        std::cout << str << std::endl;
    }
    std::cout << "-----------------------" << std::endl;
}

int main() {

    TextDocument doc;
    doc.addLine(TextLine("Hello!"));
    doc.addLine(TextLine("I love C++!"));
    doc.addLine(TextLine("Hello again!"));

    printDocument(doc);
    std::cout << "Chars count: " << doc.getTotalCharacters() << std::endl;
    std::cout << "Count of the word 'Hello': " << doc.findStringCount("Hello") << std::endl;

    std::cout << "\nChanging 'o' to '0'..." << std::endl;
    doc.replaceChar('o', '0');
    printDocument(doc);

    std::cout << "Deleting line with index 1..." << std::endl;
    doc.removeLine(1);
    printDocument(doc);

    std::cout << "Cleaning..." << std::endl;
    doc.clearText();
    std::cout << "Chars after cleaning: " << doc.getTotalCharacters() << std::endl;

    return 0;
}