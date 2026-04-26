#ifndef EXPRESSION_H
#define EXPRESSION_H

class Expression {
private:
    double a;
    double b;
    double c;

public:
    Expression();
    Expression(double a, double b, double c);

    void setValues(double a, double b, double c);
    double getA() const;
    double getB() const;
    double getC() const;

    double calculate() const;
};

#endif