#ifndef ICHARREPLACER_H
#define ICHARREPLACER_H

class ICharReplacer {
public:
    virtual ~ICharReplacer() = default;
    virtual void replaceChar(char oldChar, char newChar) = 0; 
};

#endif