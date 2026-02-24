#ifndef CLASS_H
#define CLASS_H

#include <string>

class StringClass {
private:
	std::string text;   // Змінна доступна лише в межах класу 
public:
    // Конструктори
    StringClass();                      // Конструктор без параметрів
    StringClass(const std::string& s);  // Конструктор з параметром
    StringClass(const StringClass& other); // Конструктор копіювання

    // Деструктор
    ~StringClass();

    // Методи
    int Length() const;        // Довжина рядка
    void ShiftRight();         // Зсув
    std::string GetText() const; // Читання рядка
};

#endif