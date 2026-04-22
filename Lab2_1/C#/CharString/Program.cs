using System;
using StringLibrary; 

namespace ConsoleApp
{
    class Program
    {
        static void Main(string[] args)
        {
            CharString myString = new CharString("University");

            Console.WriteLine($"String: {myString.GetValue()}");
            Console.WriteLine($"Lenght: {myString.GetLength()}");

            myString.SortDescending();
            Console.WriteLine($"After sorting: {myString.GetValue()}");
        }
    }
}