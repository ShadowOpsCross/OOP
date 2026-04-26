using System;

namespace ExpressionLibrary
{
    public class MathHelper
    {
        public static double CalculateLn(double value)
        {
            if (value <= 0)
            {
                throw new ArgumentOutOfRangeException(nameof(value), "Logarithm argument must be positive.");
            }
            return Math.Log(value);
        }
    }
}