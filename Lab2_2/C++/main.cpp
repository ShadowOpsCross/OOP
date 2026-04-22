#include <iostream>
#include <string>
#include "Romb.h"
#include "Circle.h"

void analyzeFigure(const Figure& f, const std::string& name) {
    std::cout << "Figure: " << name << std::endl;
    std::cout << "Square: " << f.getArea() << std::endl;
    std::cout << "Perimeter: " << f.getPerimeter() << std::endl;
    std::cout << "-----------------------" << std::endl;
}

int main() {
    Point2D p1{0, 5}, p2{5, 10}, p3{10, 5}, p4{5, 0};
    Rhombus r(p1, p2, p3, p4);
    Circle c(5.0);
    
    analyzeFigure(r, "Rhombus");
    analyzeFigure(c, "Circle");

    return 0;
}