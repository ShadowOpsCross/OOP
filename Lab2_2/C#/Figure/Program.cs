using System;
using FiguresLibrary;

namespace ConsoleApp
{
    class Program
    {
        static void AnalyzeFigure(Figure f, string name)
        {
            Console.WriteLine($"Figure: {name}");
            Console.WriteLine($"Square: {f.GetArea():F2}");
            Console.WriteLine($"Perimeter: {f.GetPerimeter():F2}");
            Console.WriteLine("-----------------------");
        }

        static void Main(string[] args)
        {

            Point2D p1 = new Point2D(0, 5);
            Point2D p2 = new Point2D(5, 10);
            Point2D p3 = new Point2D(10, 5);
            Point2D p4 = new Point2D(5, 0);

            Rhombus myRhombus = new Rhombus(p1, p2, p3, p4);
            Circle myCircle = new Circle(5.0);

            AnalyzeFigure(myRhombus, "Rhombus");
            AnalyzeFigure(myCircle, "Circle");
            
            Console.ReadLine();
        }
    }
}