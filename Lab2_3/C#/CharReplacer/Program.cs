using System;
using TextLibrary;

namespace ConsoleApp
{
    class Program
    {
        static void PrintDocument(TextDocument doc)
        {
            Console.WriteLine("--- Document text ---");
            foreach (var str in doc.GetAllLines())
            {
                Console.WriteLine(str);
            }
            Console.WriteLine("-----------------------");
        }

        static void Main(string[] args)
        {
            TextDocument doc = new TextDocument();
            doc.AddLine(new TextLine("Hello!"));
            doc.AddLine(new TextLine("I love C#!"));
            doc.AddLine(new TextLine("Hello again!"));

            PrintDocument(doc);
            Console.WriteLine($"Chars count: {doc.GetTotalCharacters()}");
            Console.WriteLine($"Count of the word 'Hello': {doc.FindStringCount("Hello")}");

            Console.WriteLine("\nChanging 'o' to '0'...");
            doc.ReplaceChar('o', '0');
            PrintDocument(doc);

            Console.WriteLine("Deleting line with index 1...");
            doc.RemoveLine(1);
            PrintDocument(doc);

            Console.WriteLine("Cleaning...");
            doc.ClearText();
            Console.WriteLine($"Chars after cleaning: {doc.GetTotalCharacters()}");

            Console.ReadLine();
        }
    }
}