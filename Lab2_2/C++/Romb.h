#ifndef ROMB_H
#define ROMB_H
#include "Figure.h"

struct Point2D {
    double x, y;
};

class Rhombus : public Figure {
private:
    Point2D p1, p2, p3, p4;

public:
    Rhombus(Point2D v1, Point2D v2, Point2D v3, Point2D v4);
    
    Point2D getP1() const;
    
    double getArea() const override;
    double getPerimeter() const override;
};

#endif