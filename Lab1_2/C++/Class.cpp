#include "Class.h"

// Конструктор без параметрів
StringClass::StringClass() {
    text = "";
}

// Конструктор з параметром
StringClass::StringClass(const std::string& s) {
    text = s;
}

// Конструктор копіювання
StringClass::StringClass(const StringClass& other) {
    text = other.text;
}

// Деструктор
StringClass::~StringClass() {
}

// Довжина рядка
int StringClass::Length() const {
    return text.length();
}

// Зсув
void StringClass::ShiftRight() {
    if (text.length() > 1) {
        char last = text.back();
        text.pop_back();
        text = last + text;
    }
}

// Отримати рядок
std::string StringClass::GetText() const {
    return text;
}