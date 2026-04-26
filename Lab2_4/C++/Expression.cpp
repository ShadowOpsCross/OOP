#include "Expression.h"
#include "MathHelper.h"
#include <stdexcept>

Expression::Expression() : a(0), b(0), c(1) {}

Expression::Expression(double a, double b, double c) : a(a), b(b), c(c) {}

void Expression::setValues(double a, double b, double c) {
    this->a = a;
    this->b = b;
    this->c = c;
}

double Expression::getA() const { return a; }
double Expression::getB() const { return b; }
double Expression::getC() const { return c; }

double Expression::calculate() const {
    if (c == 0) {
        throw std::runtime_error("Division by zero: parameter 'c' is zero.");
    }

    double denominator = 41.0 - (b / c) + 1.0;
    
    if (denominator == 0) {
        throw std::runtime_error("Division by zero: denominator evaluates to zero.");
    }

    double lnArgument = a * b + 2.0;
    double lnValue = MathHelper::calculateLn(lnArgument);

    return (lnValue * c) / denominator;
}