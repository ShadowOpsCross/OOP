#include <iostream>
using namespace std;

class Vector {
private:
    double r;      
    double angle;  

public:
    Vector() {
        r = 0;
        angle = 0;
    }

    Vector(double r, double angle) {
        this->r = r;
        this->angle = angle;
    }

    Vector(const Vector& v) {
        r = v.r;
        angle = v.angle;
    }

    void rotate(double a) {
        angle += a;
    }

    double getR() { return r; }
    double getAngle() { return angle; }

    Vector operator*(double k) {
        return Vector(r * k, angle);
    }

    Vector operator+(const Vector& v) {
        return Vector(r + v.r, angle + v.angle);
    }

    void print() {
        cout << "Length: " << r << ", Angle: " << angle << endl;
    }
};

int main() {
    Vector Z1;                  
    Vector Z2(5, 30);           
    Vector Z3(Z2);           

    Z3 = Z3 * 2;

    Z3.rotate(90);

    Z1 = Z2 + Z3;

    cout << "Z1: "; Z1.print();
    cout << "Z2: "; Z2.print();
    cout << "Z3: "; Z3.print();

    return 0;
}