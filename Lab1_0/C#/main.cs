using System;

class StringClassMain
{
    static void Main()
    {
        Console.Write("Enter a string: ");
        string input = Console.ReadLine();
        StringClass s = new StringClass(input);
        Console.WriteLine(s.text);
        Console.WriteLine(s.Length());
        s.ShiftRight();
        Console.WriteLine(s.text);
    }
}