using System;
using StringLibrary;

class MainClass
{
    static void Main()
    {
        // Конструктор без параметрів
        StringClass s1 = new StringClass();

        // Конструктор з параметром
        StringClass s2 = new StringClass("ello VladislavH");

        // Конструктор копіювання
        StringClass s3 = new StringClass(s2);
        // Використання методів
        Console.WriteLine("Text: " + s2.GetText());
        Console.WriteLine("Length: " + s2.Length());
        // Зсув
        s2.ShiftRight();
        Console.WriteLine("After shift: " + s2.GetText());
    }
}