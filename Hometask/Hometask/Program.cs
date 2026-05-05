using System;
using System.Linq;

namespace HomeworkApp
{
    class TextProcessor
    {
        private string[] lines;
        private int vowelCount;

        public TextProcessor(string text)
        {
            lines = text.Split(new[] { '\r', '\n' }, StringSplitOptions.RemoveEmptyEntries);
            CalculateVowels(text);
        }

        public int this[int index]
        {
            get
            {
                if (index >= 0 && index < lines.Length)
                {
                    return lines[index].Length;
                }
                throw new IndexOutOfRangeException("Index is out of range.");
            }
        }

        public int VowelCount
        {
            get { return vowelCount; }
            private set { vowelCount = value; }
        }

        private void CalculateVowels(string text)
        {
            char[] vowels = { 'a', 'e', 'i', 'o', 'u', 'y' };
            VowelCount = text.ToLower().Count(c => vowels.Contains(c));
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            string myText = "Hello, this is my homework assignment.\nTesting the indexer functionality.\nEverything works perfectly!";
            
            TextProcessor doc = new TextProcessor(myText);
            Console.WriteLine($"Number of vowels in the text: {doc.VowelCount}");

            Console.WriteLine("\n=== Indexer Testing ===");
            for (int i = 0; i < 3; i++)
            {
                Console.WriteLine($"Line with index [{i}] contains {doc[i]} characters.");
            }
            
        }
    }
}