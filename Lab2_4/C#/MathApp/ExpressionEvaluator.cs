using System;

namespace ExpressionLibrary
{
    public class ExpressionEvaluator
    {
        public double A { get; private set; }
        public double B { get; private set; }
        public double C { get; private set; }

        public ExpressionEvaluator(double a, double b, double c)
        {
            A = a;
            B = b;
            C = c;
        }

        public void SetValues(double a, double b, double c)
        {
            A = a;
            B = b;
            C = c;
        }

        public double Calculate()
        {
            if (C == 0)
            {
                throw new DivideByZeroException("Parameter 'c' cannot be zero.");
            }

            double denominator = 41.0 - (B / C) + 1.0;
            
            if (denominator == 0)
            {
                throw new DivideByZeroException("The entire denominator evaluates to zero.");
            }

            double lnArg = A * B + 2.0;
            double lnValue = MathHelper.CalculateLn(lnArg);

            return (lnValue * C) / denominator;
        }
    }
}