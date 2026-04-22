using System;

namespace FiguresLibrary
{

    public struct Point2D
    {
        public double X { get; }
        public double Y { get; }
        public Point2D(double x, double y) { X = x; Y = y; }
    }

    public abstract class Figure
    {
        public abstract double GetArea();
        public abstract double GetPerimeter();
    }

    public class Rhombus : Figure
    {
        private Point2D p1, p2, p3, p4;

        public Rhombus(Point2D p1, Point2D p2, Point2D p3, Point2D p4)
        {
            this.p1 = p1; this.p2 = p2; this.p3 = p3; this.p4 = p4;
        }

        public Point2D GetP1() { return p1; }

        private double GetDistance(Point2D a, Point2D b)
        {
            return Math.Sqrt(Math.Pow(b.X - a.X, 2) + Math.Pow(b.Y - a.Y, 2));
        }

        public override double GetArea()
        {
            double d1 = GetDistance(p1, p3);
            double d2 = GetDistance(p2, p4);
            return (d1 * d2) / 2.0;
        }

        public override double GetPerimeter()
        {
            double side = GetDistance(p1, p2);
            return 4.0 * side;
        }
    }

    public class Circle : Figure
    {
        private double radius;

        public Circle(double r)
        {
            radius = r;
        }

        public double GetRadius() { return radius; }

        public override double GetArea()
        {
            return Math.PI * radius * radius;
        }

        public override double GetPerimeter()
        {
            return 2.0 * Math.PI * radius;
        }
    }
}