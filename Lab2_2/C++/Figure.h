#ifndef FIGURE_H
#define FIGURE_H

class Figure {
public:
    virtual ~Figure() {}
    
    virtual double getArea() const = 0;
    virtual double getPerimeter() const = 0;
};

#endif