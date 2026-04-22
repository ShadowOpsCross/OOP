#include "Romb.h"
#include <cmath>

Rhombus::Rhombus(Point2D v1, Point2D v2, Point2D v3, Point2D v4) 
    : p1(v1), p2(v2), p3(v3), p4(v4) {}

Point2D Rhombus::getP1() const { 
    return p1; 
}

double getDistance(Point2D a, Point2D b) {
    return std::sqrt(std::pow(b.x - a.x, 2) + std::pow(b.y - a.y, 2));
}

double Rhombus::getArea() const {
    double d1 = getDistance(p1, p3);
    double d2 = getDistance(p2, p4);
    return (d1 * d2) / 2.0;
}

double Rhombus::getPerimeter() const {
    double side = getDistance(p1, p2);
    return 4.0 * side;
}