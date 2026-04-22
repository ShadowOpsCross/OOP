#include "Circle.h"

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

Circle::Circle(double r) : radius(r) {}

double Circle::getRadius() const { 
    return radius; 
}

double Circle::getArea() const {
    return M_PI * radius * radius;
}

double Circle::getPerimeter() const {
    return 2.0 * M_PI * radius;
}