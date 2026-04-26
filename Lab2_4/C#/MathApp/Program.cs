using System;
using ExpressionLibrary;

namespace ConsoleApp
{
    class Program
    {
        static void Main(string[] args)
        {
            ExpressionEvaluator[] expressions = new ExpressionEvaluator[]
            {
                new ExpressionEvaluator(1, 2, 3),
                new ExpressionEvaluator(-10, 5, 2),
                new ExpressionEvaluator(1, 2, 0),
                new ExpressionEvaluator(1, 84, 2)
            };

            for (int i = 0; i < expressions.Length; i++)
            {
                Console.Write($"Expression {i + 1} (a={expressions[i].A}, b={expressions[i].B}, c={expressions[i].C}): ");
                
                try
                {
                    double result = expressions[i].Calculate();
                    Console.WriteLine($"{result:F4}");
                }
                catch (ArgumentOutOfRangeException ex)
                {
                    Console.WriteLine($"Math Error -> {ex.Message}");
                }
                catch (DivideByZeroException ex)
                {
                    Console.WriteLine($"Division Error -> {ex.Message}");
                }
                catch (Exception ex)
                {
                    Console.WriteLine($"General Error -> {ex.Message}");
                }
            }
            
        }
    }
}