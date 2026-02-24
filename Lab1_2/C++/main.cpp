#include <iostream>
#include "Class.h"

int main() {
    // Конструктор без параметрів
    StringClass s1;

    // Конструктор з параметром
    StringClass s2("ello VladislavH");

    // Конструктор копіювання
    StringClass s3(s2);

	// Використання методів
    std::cout << "Text: " << s2.GetText() << std::endl;
    std::cout << "Length: " << s2.Length() << std::endl;
	// Зсув рядка
    s2.ShiftRight();
    std::cout << "After shift: " << s2.GetText() << std::endl;

    return 0;
}