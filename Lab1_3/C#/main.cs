using System;

class Vector
{
    private double r;
    private double angle;

    public Vector()
    {
        r = 0;
        angle = 0;
    }

    public Vector(double r, double angle)
    {
        this.r = r;
        this.angle = angle;
    }


    public Vector(Vector v)
    {
        r = v.r;
        angle = v.angle;
    }

  
    public void Rotate(double a)
    {
        angle += a;
    }

  
    public double GetR() => r;
    public double GetAngle() => angle;

    public static Vector operator *(Vector v, double k)
    {
        return new Vector(v.r * k, v.angle);
    }

    public static Vector operator +(Vector v1, Vector v2)
    {
        return new Vector(v1.r + v2.r, v1.angle + v2.angle);
    }

    public void Print()
    {
        Console.WriteLine($"Length: {r}, Angle: {angle}");
    }
}

class Program
{
    static void Main()
    {
        Vector Z1 = new Vector();
        Vector Z2 = new Vector(5, 30);
        Vector Z3 = new Vector(Z2);

        Z3 = Z3 * 2;
        Z3.Rotate(90);

        Z1 = Z2 + Z3;

        Console.WriteLine("Z1:"); Z1.Print();
        Console.WriteLine("Z2:"); Z2.Print();
        Console.WriteLine("Z3:"); Z3.Print();
    }
}